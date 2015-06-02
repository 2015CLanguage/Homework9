#include<stdio.h>
int main()
{
	int leap(int year);
	int numday(int month,int day);
	int year,month,day,daynum;
	scanf("%d%d%d",&year,&month,&day);
	daynum=numday(month,day);
	if(leap(year)&&month>2)
		daynum+=1;
	printf("%d年的%d月%d日是该年的第%d天\n",year,month,day,daynum);
	return 0;
}
int leap(int year)
{
	int leap;
	leap=((year%4==0&&year%100!=0)||year%400==0);
	return leap;
}
int numday(int month,int day)
{
	int daylist[12]={31,28,31,30,31,30,31,31,30,31,30,31},i;
  for(i=0;i<month;i++)
	{
		day+=daylist[i-1];
	}
	return day;
}
