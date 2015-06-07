#include<stdio.h>
int main()
{
	char*m[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int n;
	printf("请输入月份:");
	scanf("%d", &n);
	if ((n <= 12) && (n >= 1))
		printf("该月份的英文名称为:%s.\n", *(m + n - 1));
	else
		printf("输入错误");
	return 0;
}
