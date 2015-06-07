#include<stdio.h>
int main()
{
  int n,y,r,t,i;
  int a[12];
  a[1]=31; a[2]=28; a[3]=31;
  a[4]=30; a[5]=31; a[6]=30;
  a[7]=31; a[8]=31; a[9]=30;
  a[10]=31;a[11]=30;a[12]=31;
  while (scanf("%d %d %d",&n,&y,&r)!=EOF)
        {
            if (y<=0 || y>12) {printf("出错了\n"); continue;}
        t=0;
        if((n%4==0 && n%100!=0)||(n%400==0)) a[2]=29; else a[2]=28;
        if (a[y]<r) {printf("出错了\n"); continue;}
        for (i=1;i<y;i++)
            t+=a[i];
        t+=r;
        printf("输入的日期是今年的第%d天\n",t);
        }
}
