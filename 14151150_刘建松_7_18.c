#include"stdio.h"
int t(int Y,int R);
int l(int Y);
int main()
{
	int N,Y,R,T;
	printf("请输入年月日:");
	scanf("%d%d%d",&N,&Y,&R);
	T=t(Y,R);
	if(l(Y)&&Y>2)
	  T=T+1;
	printf("%d年%d月%d日是%d年的第 %d 天\n",N,Y,R,N,T);
	return 0;
} 

int t(int Y,int R)
{
	int i,x[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<Y;i++)
	   R=R+x[i];
	return R;
}

int l(int Y)
{
	int l;
	l=Y%4==0&&Y%100!=0||Y%400==0;
	return l;
}
