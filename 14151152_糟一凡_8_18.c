#include<stdio.h>
int main()
{
	int m;
	const char *month[]={"January","February"," March","April","May","June","July","August","September","October","November","December"};
	printf("请输入月份号：");
	scanf("%d",&m);
	if(m<13&&m>0)
	{ 
	    printf("其对应的月份名为：%s",month[m-1]);
	}
	else
	{
		printf("没有这个月！");
	}
	return 0;
} 
