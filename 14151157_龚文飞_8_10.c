#include"stdio.h"
void change(int *p);
void main()
{
	int a[5][5], *p, i, j;
	printf("请输入数组各元素:\n");
	for (i = 0; i<5; i++)
	{
		for (j = 0; j<5; j++)
			scanf_s("%d", &a[i][j]);
	}
	p = &a[0][0];
	change(p);
	printf("现在，数组变为:\n");
	for (i = 0; i<5; i++)
	{
		for (j = 0; j<5; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
void change(int *p)
{
	int i, j, temp;
	int *pmax, *pmin;
	pmax = p;
	pmin = p;
	for (i = 0; i<5; i++)
	{
		for (j = 0; j<5; j++)
		{
			if (*pmax<*(p + 5 * i + j))
				pmax = p + 5 * i + j;
			if (*pmin>*(p + 5 * i + j))
				pmin = p + 5 * i + j;
		}
	}
	temp = *(p + 12);
	*(p + 12) = *pmax;
	*pmax = temp;
	temp = *p;
	*p = *pmin;
	*pmin = temp;
	pmin = p + 1;
	for (i = 0; i<5; i++)
	{
		for (j = 0; j<5; j++)
		{
			if (((p + 5 * i + j) != p) && (*pmin>*(p + 5 * i + j)))
				pmin = p + 5 * i + j;
		}
	}
	temp = *pmin;
	*pmin = *(p + 4);
	*(p + 4) = temp;
	pmin = p + 1;
	for (i = 0; i<5; i++)
	{
		for (j = 0; j<5; j++)
		{
			if (((p + 5 * i + j) != (p + 4)) && ((p + 5 * i + j) != p) && ((p + 5 * i + j) != (p + 20)) && (*pmin>*(p + 5 * i + j)))
				pmin = p + 5 * i + j;
		}
	}
	temp = *pmin;
	*pmin = *(p + 24);
	*(p + 24) = temp;
}
