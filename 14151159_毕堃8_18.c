#include <stdio.h>

void main()
{
    char *p[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int n;
    printf("请输入月份");
    scanf("%d",&n);
    if((n>=1)&&(n<=12))
        printf(*(p+n-1));
    else
        printf("输入错误");
}
