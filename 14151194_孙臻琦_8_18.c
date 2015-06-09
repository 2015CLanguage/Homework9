#include"stdio.h"
int main()
{
	char *m[13]={"illegal month","January","February","March","April","May","June","July","August","September","October","November","December"};
	int month;
	printf("请输入月份:");
	scanf("%d",&month);
	if(month>=1 && month<=12)
		printf("英文:%s\n",*(m+month));
	else
		printf("不在1到12内\n");
}
