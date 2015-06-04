#include<stdio.h>
int main()
{
	char*month_name[13]={"illegal month","January","February","March","April","May","June","July","August","September","October","November","December"};
	int n;
	printf("请输入月份号:");
	scanf("%d",&n);
	if((n<=12)&&(n>=1))
		printf("该月份的英文月名为:%s.\n",*(month_name+n));
	else
		printf("输入错误");
	return 0;
}
