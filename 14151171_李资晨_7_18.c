#include<stdio.h>
int main()
{
	int sum_day(int month,int day);
	int leap(int year);
	int year,month,day,days;
	printf("输入日期(year,month,day):");
	scanf("%d,%d,%d",&year,&month,&day);
    printf("%d,%d,%d",year,month,day);
	days=sum_day(month,day);
	if(leap(year)&&month>=3)
		days=days+1;
	printf("is the %dth day of the year.\n",days);
	return 0;
}

int sum_day(int month,int day)
{
	int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int a;
	for(a=1;a<month;a++)
		day=day_tab[a]+1;
	return (day);
}
int leap(int year)
{int leap;
leap=year%4==0&&year%100!=0||year%400==0;
return (leap);
}
