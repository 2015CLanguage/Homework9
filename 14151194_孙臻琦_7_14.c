#include<stdio.h>
#define N 10
#define M 5
float score[N][M];
float averS[N],averC[M];
int main()
{
	int i,j;
	int r,c;
	float h,high;
	void averageS(void);
	void averageC(void);
	float variance(void);
	for(i=0;i<N;i++)
	{
		printf("\n请输入第%2d个学生的成绩：\n",i+1);
		for(j=0;j<M;j++)
			scanf("%f",&score[i][j]);
	}
	averageS();
	printf("\n  NO.       subject1  subject2  subject3  subject4  subject5  average\n");
	for(i=0;i<N;i++)
	{
		printf("\nNO%6d",i+1);
		for(j=0;j<M;j++)
		{
			printf("%10.2f",score[i][j]);
		}
		printf("%10.2f",averS[i]);
	}
	
	averageC();
	printf("\naverage:");
	for (j=0;j<M;j++)
		printf("%10.2f",averC[j]);
	printf("\n");
	
	high=score[0][0];
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			if(score[i][j]>high)
			{
				high=score[i][j];
				r=i+1;
				c=j+1;
			}
	h=high;
	printf("最高分：%8.2f NO.%2d  subject%2d\n",h,r,c);

	printf("方差为：%8.2f\n",variance());
	return 0;
}

void averageS(void)
{
	int i,j;
	float s;
	for(i=0;i<N;i++)
	{
		for(j=0,s=0;j<M;j++)
			s+=score[i][j];
		averS[i]=s/5.0;
	}
}

void averageC(void)
{
	int i,j;
	float s;
	for(j=0;j<M;j++)
	{
		s=0;
		for(i=0;i<N;i++)
			s+=score[i][j];
		averC[j]=s/10.0;
	}
}


float variance(void)
{
	int i;
	float x1=0.0,x2=0.0;
	for(i=0;i<N;i++)
	{
		x1+=averS[i]*averS[i];
		x2+=averS[i];
	}
	return(x1/N-(x2/N)*(x2/N));
}
