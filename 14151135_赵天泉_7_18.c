#include<stdio.h>
int f(int month,int day);
int g(int year);
int main()
{
	int year,month,day,days;
	printf("请输入年、月、日：");
	scanf("%4d,%4d,%4d",&year,&month,&day);
	days=f(month,day);
	if(g(year)&&month>=3)
		days=days+1;
	printf("该天是这一年的第%d天\n",days);
	return 0;
}

int f(int month,int day)
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i=1;i<month;i++)
		day=day+a[i];
	return(day);
}
int g(int year)
{
	int k;
	k=year%4==0 && year%100!=0||year%400==0;
	return(k);
}
