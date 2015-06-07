#include<stdio.h>
int main()
{
    int n;
    char *a[13]={"not found","January","February","March","April","May","June","July","Augest","Septemper","October","Noverber","December"};
    printf("请输入要查找的月份号：\n");
    scanf("%d",&n);
    if((n<=12)&&(n>=1))
    printf("对应的月份是：%s",*(a+n));
    else
    printf("输入无效数字!\n");
    return 0;
}
