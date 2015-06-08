#include<stdio.h>
void calendar(int y,int *a);
void calendar(int y,int *a)
{
	if((y%4==0&&y%100!=0)||y%400==0)
		*(a+1)=29;
}
int main()
{
	int y,m,d;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},s=0,*p;
	printf("请输入年份:");
	scanf("%d",&y);
	printf("请输入月份:");
	scanf("%d",&m);
	printf("请输入日子:");
	scanf("%d",&d);	
	calendar(y,a);
	for(p=a;p<a+m-1;p++)
	{
		s+=*p;
	}
	printf("该日是该年的第%d天.\n",s+d);
	return 0;
}
