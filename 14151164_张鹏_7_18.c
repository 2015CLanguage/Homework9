#include<stdio.h>
int main()
{
	int t(int b,int c);
	int w(int a);
	int a,b,c,d;
	printf("输入年月日");
	scanf("%d%d%d",&a,&b,&c);
	d=t(b,c);
		if(w(a)&&b>2)
			d=d+1;
		printf("这天是这年的第%d\n",d);
		return 0;
}
int t(int b,int c)
{
	int f[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i=0;i<b-1;i++)
		c=f[i]+c;
		return c;
}
int w(int a)
{
	int w;
	w=a%4==0&&a%100!=0||a%400==0;
	return w;
}
