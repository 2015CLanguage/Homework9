#include<stdio.h>
#include<string.h>
int main()
{
	int calculate(int);
	int d=1;
	d = calculate(d);
	printf("这一天是一年中的第%d天\n", d);
	return 0;
}

int calculate(int c)
{
	int x[8];
	int i, b, y,m;
	printf("请输入年月日，如 2 0 1 4 1 2 0 3 :\n");
	for (i = 0; i < 8; i++)
		scanf_s("%d", &x[i]);
	if (x[4] == 0 && x[5] < 3)
		y = (x[5] - 1) * 31 + x[6] * 10 + x[7];
	else
	{
		if (x[5] > 2 && x[5] < 9)
			y = (x[5] - 1) * 30 + x[6] * 10 + x[7] + x[5] / 2 - 2;
		else
			y = (x[4] * 10 + x[5] - 1) * 30 + x[6] * 10 + x[7] + (x[4] * 10 + x[5] + 1)/2 - 2;
	}
	b = x[0] * 1000 + x[1] * 100 + x[2] * 10 + x[3];
	m=x[4] * 10 + x[5];
	if (b % 4 == 0 && b % 100 != 0 )
	{
		if (m > 2)
			y = y + 1;
	}
	else if(b % 400 == 0)
	{
		if (m > 2)
			y = y + 1;
	}
	return(y);
}
