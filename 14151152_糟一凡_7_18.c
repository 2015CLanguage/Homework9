#include<stdio.h>
int day(int x,int y,int z);
int main()
{
	int a,b,c;
	printf("请输入具体年月日：");
	scanf("%d.%d.%d",&a,&b,&c);
	printf("该日是该年的第%d天",day(a,b,c));
	return 0;
}
int day(int x,int y,int z)
{
	int i,s;
	int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(y==1)
	{
		return z;
	}
	else if(y==2)
	{
		return 31+z;
	}
	else
	{
		s=0;
		for(i=0;i<y-1;i++)
		{
			s=s+m[i];
		}
		if(x%400==0||(x%4==0&&x%100!=0))
		{
			return s+z+1;
		}
		else
		{
			return s+z;
		}
	}
}

