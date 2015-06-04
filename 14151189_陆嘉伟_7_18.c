#include<stdio.h>
int main()
{
void fun1(int b,int c);
void fun2(int b,int c);
int a,b,c;
printf("输入年月日：");
scanf("%d %d %d",&a,&b,&c);
if(a%4==0&&a%100!=0||a%400==0)
fun1(b,c);
else
fun2(b,c);
return 0;
}

void fun1(int b,int c)
{
int i,days=0,day[12]={31,29,31,30,31,30,31,31,30,31,30,31};
for(i=0;i<b-1;i++)
days=days+day[i];
days=days+c;
printf("是该年第%d天",days);
}

void fun2(int b,int c)
{
int i,days=0,day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
for(i=0;i<b-1;i++)
days=days+day[i];
days=days+c;
printf("是该年第%d天",days);
}
