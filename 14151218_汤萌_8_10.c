#include<stdio.h>
int main()
{
	void put(float *p);
	float a[5][5];
	float *p;
	int i, j;
	for (i = 0; i < 5; i++)
	{
		printf("请输入第%d行数，用空格隔开：\n", i+1);
		for (j = 0; j < 5; j++)
		{
			scanf("%f", &*(*(a + i) + j));
		}
	}
	printf("\n变化之前的数组为：\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%.2f\t", *(*(a+i)+j));
		}
		printf("\n");
	}
	p = *a;
	put (p);
	printf("\n变化之后数组为：\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%.2f\t", *(*(a+i)+j));
		}
		printf("\n");
	}
	return 0;
}

void put(float *p)
{
	int i, j, temp;
	float *max, *min;
	max = p;
	min = p;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*max < *(p + 5*i + j))
			{
				max = (p + 5*i + j);
			}
			if (*min > *(p + 5*i + i))
			{
				min = (p + 5*i + j);
			}
		}
	}
	temp = *max;
	*max = *(p + 12);
	*(p + 12) = temp;
	temp = *min;
	*min = *p;
	*p = temp;
	min = p + 1;
	for (i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if ((i != 0 && j!=0) && (*min > *(p + 5*i +j)))
			{
				min = (p + 5*i + j);
			}	
		}
	}
	temp = *min;
	*min = *(p + 4);
	*(p + 4) = temp;
	min = p + 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((i != 0 && j != 0) && (i != 0 && j != 4) && *min > *(p + 5*i +j))
			{
				min = (p + 5*i +j);
			}
		}
	}
	temp = *min;
	*min = *(p + 20);
	*(p + 20) = temp;
	min = p + 1;
	for (i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("\n%f, %f, %d, %d\n", *min, *(p + 5*i + j), i, j);
			if ((i == 0 && j == 0) || (i == 0 && j == 4) || (i == 4 && j == 0) )
			  continue;
			if (*min > *(p + 5*i + j))
			{
				min = (p + 5*i + j);
			}
		}
	}
	temp = *min;
	*min = *(p + 24);
	*(p + 24) = temp;
}
