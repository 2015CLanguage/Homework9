#include<stdio.h>
int run(int a,int b);
int tian(int b,int c);
int main()
{
	int x,y,z,m,n,t;
	t=0;
	printf("请输入年月日:");
	scanf("%d,%d,%d",&x,&y,&z);
	m=run(x,y);
	n=tian(y,z);
	t=m+n;
	printf("该日是该年的第%d天。\n",t);
	return 0;
}
int run(int a,int b)
{
	int r;
	if((a%4==0&&a%100!=0||a%400==0)&&(b>2))
		r=1;
	else
		r=0;
	return r;
}
int tian(int b,int c)
{
	int d=0;
	switch(b)
	{case 1:d=c;		break;
	 case 2:d=31+c;		break;
	 case 3:d=59+c;		break;
	 case 4:d=90+c;		break;
	 case 5:d=120+c;	break;
	 case 6:d=151+c;	break;
	 case 7:d=181+c;	break;
	 case 8:d=212+c;	break;
	 case 9:d=243+c;	break;
	 case 10:d=273+c;	break;
	 case 11:d=304+c;	break;
	 case 12:d=335+c;	break;
	 default:putchar('\a');
	}
	return d;
}
