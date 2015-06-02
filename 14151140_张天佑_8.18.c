#include "stdio.h"
void main()
{
	char *month[12] = { "January", "Februry", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int n;
	printf("请输入月份:\n");
	scanf("%d", &n);
	if (n <= 12 && n >= 1)
		printf("英文名为:  %s.\n", *(month + n - 1));
	else
		printf("输入错误!");
}
