Enter file contents 
# include <stdio.h>
int main()
{
	int a[10][5], i, j;
	void lmw(int b[10][5]), wml(int b[10][5]), lxw(int b[10][5]), xw(int b[10][5]);
	printf("请输入成绩\n");
	for (i = 0; i<10; i++)
	{
		for (j = 0; j<5; j++)
			scanf_s("%d", &a[i][j]);
	}
	lmw(a);
	wml(a);
	lxw(a);
	xw(a);
	return 0;
}
void lmw(int b[10][5])
{
	int i = 0, j, sum = 0;
	float n;
	while (i<10)
	{
		for (j = 0; j<5; j++)
			sum = sum + b[i][j];
		n = sum / 5;
		i = i + 1;
		printf("第%.2d个学生的成绩为%f\n", i, n);
		sum = 0;
	}
}
void wml(int b[10][5])
{
	int i = 0, j, sum = 0;
	float n;
	while (i<5)
	{
		for (j = 0; j<10; j++)
			sum = sum + b[j][i];
		n = sum / 10;
		i = i + 1;
		printf("第%.2d门课的平均成绩为%f\n", i, n);
		sum = 0;
	}
}
void lxw(int b[10][5])
{
	int i, j, x, y, max;
	max = b[0][0];
	for (i = 0; i<10; i++)
		for (j = 0; j<5; j++)
		{
		if (b[i][j]>max)
		{
			max = b[i][j];
			x = i + 1;
			y = j + 1;
		}
		}
	printf("最高分数为:%.2d\n", max);
	printf("所对应的学生为:%.2d\n", x);
	printf("所对应的科目为:%.2d\n", y);
}
void xw(int b[10][5])
{
	int i = 0, j, sum = 0, y = 0;
	float n, x = 0, z;
	while (i<10)
	{
		for (j = 0; j<5; j++)
			sum = sum + b[i][j];
		n = sum / 10;
		i = i + 1;
		x = x + n*n;
		y = y + n;
		sum = 0;
	}
	z = x / 10 + (y / 10)*(y / 10);
	printf("方差为%.2f", z);
}
