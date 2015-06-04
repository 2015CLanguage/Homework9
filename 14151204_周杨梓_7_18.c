#include<stdio.h>
int year(int y);
int month(int m,int z);
void day(int d,int n);
int main()
{
	int y,m,d,z,n,e;
	printf("请输入年月日:\n");
	scanf("%d%d%d",&y,&m,&d);
	z=year(y);
	n=month(m,z);
	day(d,n);
	return 0;
} 
int year(int y)
{
	if(y%4==0 && y%100!=0 || y%400==0)
	{
		return 29;
	}
	else
	{
		return 28;
	}
}
int month(int m,int z)
{
	int i,s;
	s=0;
	for(i=1;i<m;i++)
	{
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10)
		{
			s=s+31;
		}
		else if(i==2)
		{
			s=s+z;
		}
		else
		{
			s=s+30;
		}
	}
	return s;
}
void day(int d,int n)
{
	printf("该日是该年的第%d天\n",n+d);
}
