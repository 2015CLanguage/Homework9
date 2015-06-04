#include<stdio.h>
int sum(int m,int d);
int l(int y);
int main()
{
             int y ,m,d,ds;
             printf("请输入年月日：");
             scanf("%d,%d,%d",&y,&m,&d);
             ds=sum(m,d);
             if(l(y)&&m>=3)
               ds=ds+1;
             printf("%d/%d/%d,是这一年中的第 %d 天。\n",y,m,d,ds);
             return 0;
}
int sum(int m,int d)
{
             int da[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
             int i;
             for(i=1;i<m;i++)
               d+=da[i];
             return (d);
}
int l(int y)
{
             int l;
             l=y%4==0&&y%100!=0||y%400==0;
             return (l);
}
