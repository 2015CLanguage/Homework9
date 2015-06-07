#include "stdio.h"

int main()
{
    char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int n;
    printf("请输入月份号：\n");
    scanf("%d",&n);
    if(n>0 && n<13)
        printf("您输入的月份的英文名为:%s\n",*(month+n-1));
    else printf("您输入的月份数不合法。\n");
    return 0;
}
