Enter file contents here
# include <stdio.h>
int main()
{
	int x, y, z;
	printf("请分别输入年份月份日子:");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);
	int a[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int b[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	void lmw(int m, int n, int c[12]);
	void lxw(int m, int n, int c[12]);
	int leap;
	if (x % 4 != 0)
		leap = 0;
	else if (x % 100 != 0)
		leap = 1;
	else if (x % 400 != 0)
		leap = 0;
	else
		leap = 1;
	if (leap == 0)
		lmw(y, z, a);
	else
		lxw(y, z, b);
	return 0;
}
void lmw(int m, int n, int c[12])
{
	int sum = 0, i;
	for (i = 0; i<m - 1; i++)
		sum = sum + c[i];
	sum =sum+ n;
	printf("第%d天", sum);
}
void lxw(int m, int n, int c[12])
{
	int sum = 0, i;
	for (i = 0; i < m - 1; i++)
		sum = sum + c[i];
	sum = sum + n;
	printf("第%d天", sum);

}
