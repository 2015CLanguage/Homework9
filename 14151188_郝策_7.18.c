#include"stdio.h"
int main()
{
	int year,month,day,d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int sum,i;
	printf("输入年份\n");
	scanf("%d",&year);
	printf("输入月份\n");
	scanf("%d",&month);	
	printf("输入日期\n");
	scanf("%d",&day); 
	
	if(year%4==0&&year%100!=0||year%400==0)
		d[1]=29;
	sum=day;
	for(i=0;i<month-1;i++) 
	{
		sum=sum+d[i];
	}
	printf("%d年%d月%d日是第%d天",year,month,day,sum);
} 
