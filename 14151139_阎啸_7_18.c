#include <stdio.h>
int day_of_year(int year,int month, int day)
{
 int monthDays[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
 int i;
 for(i=0;i<month;i++)
 day+=monthDays[i];
 if(year%4==0&&year%100!=0||year%400==0)
 {
  if (month >2)
  day+=1;
 }
 return day;
}

int main()
{
 int year,month,day;
 printf("请输入年月日：\n");
 scanf("%d%d%d",&year,&month,&day);
 day=day_of_year(year,month,day);
 printf("这一天是该年的%d天\n",day);
 return 0;
}
