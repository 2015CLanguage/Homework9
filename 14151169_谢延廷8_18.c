#include<stdio.h>
void main()
{
	char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int n;
	printf("请输入月份号:\n");
	scanf("%d",&n);
	printf("对应的英文月名为:%s.\n",*(month+n-1));
}
