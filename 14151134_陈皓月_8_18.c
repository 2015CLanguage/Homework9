#include<stdio.h>
void main()
{
	int i;
	char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	printf("请输入月份\n");
	scanf("%d",&i);
	if(i>0&&i<13)
		printf("其英文是%s.\n",*(month+i-1));
	else
		printf("ERROR!\n");
}
