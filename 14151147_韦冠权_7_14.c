#include<stdio.h>
float score[10][5];
float ave1[10], ave2[5];
int ns, nc;
void main()
{
	void ave_s(void);
	void ave_c(void);
	float h();
	float variance(void);
	int i, j;
	for (i = 0; i<10; i++)
	{
		printf("输入第%d位学生的5门课成绩:\n", i + 1);
		for (j = 0; j<5; j++)
		{
			scanf("%f", &score[i][j]);
		}
	}
	ave_s();
	ave_c();

	printf("\nNO.\t c1\t c2\t c3\t c4\t c5\t average\n");
	for (i = 0; i<10; i++)
	{
		printf("NO.%2d", i + 1);
		for (j = 0; j<5; j++)
		{
			printf("%8.2f", score[i][j]);
		}
		printf("%8.2f", ave1[i]);
		printf("\n");
	}
	printf("\n科目平均分:");
	for (j = 0; j < 5; j++)
		printf("%8.2f", ave2[j]);
	printf("\n");
	h();
	printf("最高分:%7.2f   第%2d位同学   第%2d科目\n", h(),ns,nc);
	variance();
	printf("平均分方差:%8.2f", variance());
	printf("\n");
}

void ave_s(void)
{
	int i, j;
	float sum;
	for (i = 0; i < 10; i++)
	{
		for (j = 0,sum=0.0; j < 5;j++)
		{
			sum = sum + score[i][j];
		}
		ave1[i] = sum / 5.0;
	}
}

void ave_c(void)
{
	int i,j;
	float sum;
	for (j = 0; j < 5; j++)
	{
		for (i = 0,sum=0.0; i < 10; i++)
			sum = sum + score[i][j];
		ave2[j] = sum / 10.0;
	}
}

float h()
{
	int i, j;
	float high=score[0][0];
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (score[i][j] > high)
			{
				high = score[i][j];
				ns = i + 1;
				nc = j + 1;
			}
		}
	}
	return high;
}

float variance(void)
{
	int i;
	float sxi = 0.0, sxn = 0.0;
	for (i = 0; i < 10; i++)
	{
		sxi = sxi + ave1[i] * ave1[i];
		sxn = sxn + ave1[i];
	}
	return(sxi / 10 - (sxn / 10)*(sxn / 10));
}
