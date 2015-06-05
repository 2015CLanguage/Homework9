#include<stdio.h>
int main()
{	
	void change1(int *p);
	void change2(int *p);
	void change3(int *p);
	void change4(int *p);
	void change5(int *p);
	int a[5][5], i, j, *p;
	printf("请输入5×5矩阵：\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			scanf_s("%d", &a[i][j]);
	}
	p = &a[0][0];
	change1(p);
	change2(p);
	change3(p);
	change4(p);
	change5(p);
	printf("\n");
	printf("调换位置后的矩阵为：\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}

void change1(int *p)                                     //将最大数放在中间
{
	int *max, i,j, temp;
	max = p;
	for (i=0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(p+5*i+j) > *max)
				max = p + 5 * i + j;
		}
	}
	temp = *max;
	*max = *(p + 12);
	*(p + 12) = temp;
}

void change2(int *p)                                     //将最小数放在左上角
{
	int *min, i, j, temp;
	min = p;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(p + 5 * i + j) < *min)
				min = p + 5 * i + j;
		}
	}
	temp = *min;
	*min = *p ;
	*p = temp;
}

void change3(int *p)                                     //将第二小数放在右上角
{
	int *min, i, j, temp;
	min = p+1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i == 0 && j == 0)
				continue;
			else if (*(p + 5 * i + j) < *min)
				min = p + 5 * i + j; 
		}
	}
	temp = *min;
	*min = *(p + 4);
	*(p + 4) = temp;
}

void change4(int *p)                                     //将第三小数放在左下角
{
	int *min, i, j, temp;
	min = p + 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i == 0 && j == 0)
				continue;
			else if (i == 0 && j == 4)
				continue;
			else if (*(p + 5 * i + j) < *min)
				min = p + 5 * i + j;
		}
	}
	temp = *min;
	*min = *(p + 20);
	*(p + 20) = temp;
}

void change5(int *p)                                     //将第四小数放在右下角
{
	int *min, i, j, temp;
	min = p + 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i == 0 && j == 0)
				continue;
			else if (i == 0 && j == 4)
				continue;
			else if (i == 4 && j == 0)
				continue;
			else if (*(p + 5 * i + j) < *min)
				min = p + 5 * i + j;
		}
	}
	temp = *min;
	*min = *(p + 24);
	*(p + 24) = temp;
}


