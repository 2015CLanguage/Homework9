#include<stdio.h>
void main()
{
	void f(int*p);
	int a[25], i,*p;
	printf("输入二维数组各元素:\n");
	for (i = 0; i<25; i++)
		scanf("%d", &a[i]);
	printf("原始数组是:\n");
	for (i = 0; i<25; i++)
	{
		if (i % 5 == 0)
		{
			printf("\n");
		}
		printf("%3d", a[i]);
	}
	p = a;
	f(p);
	printf("\n变形之后的数组为:\n");
	for (i = 0; i<25; i++)
	{
		if (i % 5 == 0)
		{
			printf("\n");
		}
		printf("%3d", a[i]);
	}
	printf("\n");
}
void f(int *p)
{
	int i, t;
	int *pM, *pm;
	pM = p; pm = p;
	for (i = 0; i < 25; i++)
	{
		if (*pM < *(p + i))
		{
			pM = p + i;
		}
		if (*pm > *(p + i))
		{
			pm = p + i;
		}
	}
	t = *(p + 12);
	*(p + 12) = *pM;
	*pM = t;

	t = *p;
	*p = *pm;
	*pm = t;

	pm = p + 1;

	for (i = 1; i < 25; i++)
	{
		if (*pm>*(p + i))
			pm = p + i;
	}
	t = *pm;
	*pm = *(p + 4);
	*(p + 4) = t;

	pm = p + 1;
	for (i = 1; i < 25; i++)
	{
		if (i==4)
		{
			continue;
		}
		if (*pm>*(p + i))
		{
			pm = p + i;
		}
	}
	t = *pm;
	*pm = *(p + 20);
	*(p + 20) = t;

	pm = p + 1;
	for (i = 1; i < 25; i++)
	{
		if (i==4||i==20)
		{
			continue;
		}
		if (*pm>*(p + i))
		{
			pm = p + i;
		}
	}
	t = *pm;
	*pm = *(p + 24);
	*(p + 24) = t;
}
