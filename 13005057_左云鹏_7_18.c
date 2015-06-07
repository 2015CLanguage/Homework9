#include<stdio.h>
int sum_day(int month,int day);
int leap(int year);

int main()
{
	int year,mouth,day,days;//输入
	printf("请输入日期（年，月，日）\n");
	scanf("%d %d %d",&year,&mouth,&day);
	printf("%d/%d/%d",year,mouth,day);
	
	days=sum_day(mouth,day);//调用
	if(leap(year)&&mouth>=3)//加天数
		days=days+1;
	printf("该天是这年的第%d天。\n",days);
	
	return 0;
}

int sum_day(int month,int day)//定义函数
{
	int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i=1;i<month;i++)
		day=day+day_tab[i];
	return(day);
}

int leap(int year)//判断年份
{
	int leap;
	leap=year%4==0&&year%100!=0||year%400==0;
	return(leap);
}
