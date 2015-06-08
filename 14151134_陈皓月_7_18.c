#include<stdio.h>
int day(int x,int y,int z);
void main()
{
	int x,y,z;
	printf("请输入年份\n");
	scanf("%d",&x);
	printf("请输入月份\n");
	scanf("%d",&y);
	printf("请输入日期\n");
	scanf("%d",&z);
	printf("该日期为该年第%d天\n",day(x,y,z));
}
int day(int x,int y,int z)
{
	int year[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i,n=0,m;
	for(i=0;i<y-1;i++)
		n=n+year[i];
	if(y>1)
	{
		if(x%100==0 && x%400==0)
			n=n+1;
		else if(x%100!=0 && x%4==0)
			n=n+1;
	}
	m=n+z;
	return m;
}
