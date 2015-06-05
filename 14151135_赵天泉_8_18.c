#include<stdio.h>
int main()
{
	char *a[13]={"blank","January","February","March","April","May","June","July","August","September","October","November","December"};
	int n;
	printf("请输入月份：");
	scanf("%d",&n);
	if((n<=12)&&(n>=1))
		printf("该月的英文月名为：%s\n",*(a+n));
	else
		printf("输入错误\n");
	return 0;
}
