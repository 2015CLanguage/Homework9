#include "stdio.h"

int search(int x,int y,int z);
int main()
{
	int year,month,day;
	printf("请输入年月日：（用逗号隔开）\n");
	scanf("%d,%d,%d",&year,&month,&day);
	search(year,month,day);
	return 0;
}
int search(int x,int y,int z)
{
	int n=0,i,s[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<y;i++)
	{
		n=n+s[i];
	}
	n=n+z;
	if(x%4==0 && x%100!=0 || x%400==0 && y>2)//闰年
	{
		n=n+1;
	}
	printf("%d年%d月%d日是这一年的第%d天\n",x,y,z,n);
	return 0;
}
