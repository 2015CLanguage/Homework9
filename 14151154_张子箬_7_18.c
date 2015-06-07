#include<stdio.h>
int main()
{
	int judge(int y);
	int sum(int m,int d);
	int y,m,d,s;
	scanf("%d %d %d",&y,&m,&d);
	s=sum(m,d);
	judge(y);
	if(judge(y)&&m>=3)
		s=s+1;
	printf("是第%d天\n",s);
	return 0;
}

int judge(int y)
{
	int leap;
	leap=y%4==0&&y%100==0||y%400==0;
	return leap;
}
int sum(int m,int d)
{
	int i,month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<m;i++)
		d=d+month[i];
	return d;
}
