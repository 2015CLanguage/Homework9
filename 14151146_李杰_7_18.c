#include<stdio.h>
int leap(int year)
{
	int leap;
	leap=(year%400==0)||((year%4==0)&&(year%400!=0));
	return(leap);
}
int sum(int month, int day)
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i=0;i<month;i++)
	{
		day=day+a[i];
	}
	return(day);
}
void main()
{
	int year,month,day,days;
	printf("Please input date(year.month.day):");
	scanf("%d.%d.%d",&year,&month,&day);
	days=sum(month,day);
	if(leap(year)&&((month>2)))
		days=days+1;
	printf("%d.%d.%d is the %dth day in this year.\n",year,month,day,days);
}
