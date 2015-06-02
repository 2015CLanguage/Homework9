#include<stdio.h>
void main()
{
	char *a[13] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int n;
	printf("请输入月份: ");
	scanf_s("%d", &n);
	if ((n <= 12) && (n >= 1))
		printf("该月的英文月份为: %s\n",* (a + n - 1));
	else
		printf("您输入的数字错误\n");
}
