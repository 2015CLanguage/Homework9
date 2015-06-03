#include<stdio.h>
int main()
{
    char *month[13]={"enter month error","January","Feberary","March","April","May","June","July","August","September","October","November","December"};
    int n;
    printf("please input month number:");
    scanf("%d",&n);
    if((n<1)||(n>12))
        printf("%s\n",*month);
    else
        printf("the result is:%s\n",*(month+n));
    return 0;
}
