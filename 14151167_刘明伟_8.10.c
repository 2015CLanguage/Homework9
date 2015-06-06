Enter file contents here
# include <stdio.h>
int main()
{
	void lmw(int *p);
	int a[5][5];
	int i, j;
	int *p;
	printf("请输入25个整数：\n");
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
		scanf_s("%d", &a[i][j]);
		}
	printf("5X5矩阵为：\n");
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
		printf("%3d", a[i][j]);
		if (j == 4)
			printf("\n");
		}
	p = &a[0][0];
	lmw(p);
	printf("新的5X5矩阵为：\n");
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
		printf("%3d", a[i][j]);
		if (j == 4)
			printf("\n");
		}
	return 0;
}
void lmw(int *p)
{
	int temp, i, j;
	int *max, *min;
	max = p;
	min = p;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
		if (*max < *(p + 5 * i + j))
			max = p + 5 * 1 + j;
		if (*min > *(p + 5 * i + j))
			min = p + 5 * i + j;
		}
	temp = *(p + 12);
	*(p + 12) = *max;
	*max = temp;
	temp = *p;
	*p = *min;
	*min = temp;
	min = p + 1;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
		if ((*min > *(p + 5 * i + j)) && (p + i * 5 + j != p))
			min = p + 5 * i + j;
		}
	temp = *(p + 4);
	*(p + 4) = *min;
	*min = temp;
	min = p + 2;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
		if ((*min >*(p + 5 * i + j)) && (p + i * 5 + j != p) && (p + i * 5 + j != p + 4))
			min = p + 5 * i + j;
		}
	temp = *(p + 20);
	*(p + 20) = *min;
	*min = temp;
	min = p + 2;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
		if ((*min > *(p + 5 * i + j)) && (p + i * 5 + j != p) && (p + i * 5 + j != p + 4) && (p + i * 5 + j != p + 20))
			min = p + 5 * i + j;
		}
	temp = *(p + 24);
	*(p + 24) = *min;
	*min = temp;
}
