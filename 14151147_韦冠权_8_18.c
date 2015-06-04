#include<stdio.h>
void main()
{
	int n;
	char *mouth[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	printf("输入月份号:\n");
	scanf_s("%d", &n);
	if ((n >= 1) && (n <= 12))
	{
		printf("%2d月的英文名是 %s .\n", n, *(mouth+n-1));
	}
	else
	{
		printf("输入错误\n");
	}
}
