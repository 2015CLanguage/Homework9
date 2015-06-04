#include <stdio.h>
int what(int a,int b,int c);
void main()
{
    int a,b,c,x;
    printf("please input the year:");
    scanf("%d",a);
    printf("please input the month:");
    scanf("%d",b);
    if(b<0||b>12)printf("wrong");
    printf("please input the day:");
    scanf("%d",c);
    if(c<0||c>31)printf("wrong");
    x=what(a,b,c);
    printf("it is the %d th day:",x);
}
int what(int a,int b,int c)
{
    int k=-2,x;
    if(a%4==0)k=-1;
    if(a<3)x=(b-1)*30+k+c;
    else if(a<8)x=(b-1)*30+k+c+(b+1)/2;
    else x=(b-1)*30+k+c+(b+2)/2;
    return x;
}
