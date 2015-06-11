# include<stdio.h>
int sum(int month,int day);
int leap(int year);
int sum(int month,int day)
{
	int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i=1;i<month;i++)
		day+=day_tab[i];
	return(day);
}
int leap(int year)
{
	int leap;
	leap=year%4==0&&year%100!=0||year%400==0;
	return (leap);
}
int main(void)
{
	int year,month,days,day;
	printf("输入年月日：");
		scanf("%d,%d,%d",&year,&month,&day);
		days=sum(month,day);
		if(leap(year)&&month>=3)
			days=days+1;
			printf("这是该年中的第%d天",days);
	return 0;
