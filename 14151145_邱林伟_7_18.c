#include<stdio.h>
int sum_day(int y,int m,int d);
void main()
{
	int year,month,day,days;
	printf("请输入年，月，日:");
	scanf("%d,%d,%d",&year,&month,&day);
	printf("%d/%d/%d",year,month,day);
    days=sum_day(year,month,day);
	printf(" is the %dth day\n",days);
}

int sum_day(int y,int m,int d)
{
	int i;
	int leap_year_day[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int year_day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=1;i<m;i++)
	{
		if(y%4==0&&y%100!=0||y%400==0)
			d=d+leap_year_day[i];
		else
			d=d+year_day[i];
	}
	return d;
}
