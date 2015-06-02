#include <stdio.h>
void main()
{ void f(int n,int y,int r);
  int n,int y,int r;
  printf("请输入年，月，日：");
  scanf("%d%d%d",&n,&y,&r);
  f(n,y,r);
}

void f(int n,int y,int r)
{
  int a[12]={31,0,31,30,31,30,31,31,30,31,30,31};
  if(n%4==0)
	a[1]=29;
  else 
	a[1]=28;
  int b=0,i;
  for(i=0;i<y-1;i++)
	b=b+a[i];
  b=b+r;
  printf("此天是%d年的第%d天\n",n,b);
}
