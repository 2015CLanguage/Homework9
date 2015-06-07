#include<stdio.h>

int main()
{
	char *mouth_name[13]={"illegal mouth","January","February","March","April","May","June","July","August","September","October","November","December"};
	
	int x;
	printf("请输入月份号：\n");
	scanf("%d",&x);
	if((x<=12)&&(x>=1))
		printf("It is %s.\n",*(mouth_name+x));
	else
		printf("It is wrong.\n");
	return 0;
}
