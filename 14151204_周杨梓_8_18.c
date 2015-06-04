#include<stdio.h>
int main()
{
	char * p[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int n;
	printf("请输入月份号:\n");
	scanf("%d",&n);
	if(n>=1 && n<=12)
	{
	    printf("该月的英文月名为:%s\n",* (p+n-1));
	}
	else
	{
		printf("输入错误!\n");
	}
    return 0;
}
