#include "stdio.h"
int judge(int m);
int cau(int n,int o);
void main()
{
	int m,n,o,x,num;
	printf("请输入年份:");
	scanf("%d",&m);
	printf("请输入月份:");
	scanf("%d",&n);
	printf("请输入日期:");
	scanf("%d",&o);
	x=judge(m);
	if(x==0)
		num=cau(n,o);
	else
	{
		if(n>2)
			num=cau(n,o)+1;
		else
			num=cau(n,o);
	}
	printf("%d年%d月%d日时该年第%d天\n",m,n,o,num);
}
int judge(int m)
{
	int x=1;
	if((m%4!=0)&&(m%100==0||m%400!=0))
		x=0;
	return x;
}
int cau(int n,int o)
{
	int num=0,i,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<n-1;i++)
	{
		num+=a[i];
	}
	num+=o;
	return num;
}
