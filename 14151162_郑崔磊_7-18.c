#include<stdio.h>
int search(int year,int month,int day);
int main()
{
    int year,month,day,x;
    printf("please input year ,month ,day:\n");
    scanf("%d%d%d",&year,&month,&day);
    x=search(year,month,day);
    printf("%d %d %d is the %dth day of the year",year,month,day,x);
    return 0;
}
int search(int year,int month,int day)
{
    int a[12],x=0,*p,i;
    p=a;
    if((year%400)==0)
        {a[0]=31;a[1]=29;a[2]=31;a[3]=30;a[4]=31;a[5]=30;a[6]=3;a[7]=31;a[8]=30;a[9]=31;a[10]=30;a[11]=31;}
    if((year%4)==0&&(year&100)!=0)
        {a[0]=31;a[1]=29;a[2]=31;a[3]=30;a[4]=31;a[5]=30;a[6]=3;a[7]=31;a[8]=30;a[9]=31;a[10]=30;a[11]=31;}
    else
        {a[0]=31;a[1]=28;a[2]=31;a[3]=30;a[4]=31;a[5]=30;a[6]=3;a[7]=31;a[8]=30;a[9]=31;a[10]=30;a[11]=31;}
    for(i=0;i<month;i++)
        x=x+*(p+i);
    x=x+day;
    return (x);
}
