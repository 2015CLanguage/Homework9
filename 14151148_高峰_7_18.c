#include<stdio.h>
int leap(int x);
int main()
{
	int i,j,year[12][31],y,m,d,day=0;
	printf("请输入日期:");
	scanf("%d %d %d",&y,&m,&d);
	for(i=0;i<12;i++)
	{
		for(j=0;j<31;j++)
			year[i][j]=1;
	}
	year[2][29]=year[2][30]=year[2][31]=year[4][31]=year[6][31]=year[9][31]=year[11][31]=0;
	if(leap(y))
		year[2][29]=1;
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<31;j++)
			day=day+year[i][j];
	}
	day=day+d;
	printf("%d年%d月%d日是这一年的第%d天\n",y,m,d,day);
	return 0;
}
int leap(int x)
{
	int y=0;
	if(x%100==0)
	{
		if(x%400==0)
			y=1;
	}
	else if(x%4==0)
		y=1;
	return y;
}
