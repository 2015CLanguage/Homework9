#include "stdio.h"
void change(int *p)
{
	int i, j, t,*p1=p, *p2=p;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*p1 < *(p + 5 * i + j))
			{
				p1 = p + 5 * i + j;
			}
			if (*p2>*(p + 5 * i + j))
			{
				p2 = p + 5 * i + j;
			}
		}
	}
	t = *(p + 12);                         //最大值与中心值对换
	*(p + 12) = *(p1);
	*(p1) = t;
	t = *p;
	*p = *(p2);                            //最小值与左上角对换
	*(p2) = t;
	p2 = p + 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i == 0 && j == 0)
				continue;
			if (*p2>*(p + 5 * i + j))
			{
				p2 = p + 5 * i + j;
			}
		}
	}
	t = *(p+4);                        //第二小与右上对换
	*(p+4) = *(p2);
	*(p2) = t;
	p2 = p + 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == 4))
				continue;
			if (*p2>*(p + 5 * i + j))
			{
				p2 = p + 5 * i + j;
			}
		}
	}
	t = *(p + 20);                        //第三小与左下对换
	*(p + 20) = *(p2);
	*(p2) = t;
	p2 = p + 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == 4) || (i == 4 && j == 0))
				continue;
			if (*p2>*(p + 5 * i + j))
			{
				p2 = p + 5 * i + j;
			}
		}
	}
	t = *(p + 24);                                //第四小与右下对换
	*(p + 24) = *(p2);
	*(p2) = t;
}
void main()
{
	int i, j, a[5][5];
	printf("输入矩阵:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	change(*a);
	printf("变换后:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
