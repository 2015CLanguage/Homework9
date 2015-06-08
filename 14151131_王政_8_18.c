#include<stdio.h>
int main()
{
	const char *m[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int y;
	printf("请输入月份号:");
	scanf("%d",&y);
	if(y>0&&y<=12)
		printf("%d月英文名为:%s\n",y,m[y-1]);
	else
		printf("输入错误!!!");
	return 0;
}
