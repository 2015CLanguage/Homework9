#include<stdio.h>
int main()
{
	int leap(int year);
	int numday(int month,int day);
	int year,month,day,number;
	printf("请输入年月日：\n");
	scanf("%d%d%d",&year,&month,&day);
	number=numday(month,day);
	if(leap(year)&&month>2)
		number+=1;
	printf("%d年的%d月%d日是该年的第%d天\n",year,month,day,number);
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
	int M[12]={31,28,31,30,31,30,31,31,30,31,30,31},i;
	for(i=0;i<month;i++)
	{
		day+=M[i-1];
	}
	return day;
}
