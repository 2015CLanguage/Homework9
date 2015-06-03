#include<stdio.h>
void main()
{
	int calculate(int y,int m,int d);
	int y,m,d,day;
	printf("按顺序输入年、月、日:");
	scanf("%d%d%d",&y,&m,&d);
	day=calculate(y,m,d);
	printf("%d年%d月%d日 是该年的第 %d 天\n",y,m,d,day);
}
int calculate(int y,int m,int d)
{
	int y1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int y2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int i;
	if(y%4==0&&y%100!=0||y%400==0)
	{
		for(i=0;i<m-1;i++)
			d=d+y2[i];
	}
	else
	{
		for(i=0;i<m-1;i++)
			d=d+y1[i];
	}
	return d;
}
