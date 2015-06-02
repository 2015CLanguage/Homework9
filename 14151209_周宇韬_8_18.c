#include <stdio.h>

int main()
{
    char *p[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int n,i;
    printf("输入月份号:");
    scanf("%d",&n);
    for (i=0; *(p[n-1]+i)!='\0'; i++)
    {
        printf("%c",*(p[n-1]+i));
    }
    
    return 0;
}
