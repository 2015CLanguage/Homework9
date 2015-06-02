#include<stdio.h>
int x,y,z;
int find(int x,int y,int z);
find(int x,int y,int z)
{
	int i,t,s,days=0;
    if(x%4==0)t=1;
    else t=0;
    for(i=1;i<y;i++)
	{
	if(i==2)s=2-t;
	else s=0;days=days+30+i%2-s;
	}
    days=days+z;
    return(days);
}

void main()
{
	int year,month,date,day;scanf("%d%d%d",&year,&month,&date);
	day=find(year,month,date);
	printf("这一天是该年的第%d天\n",day);
}
