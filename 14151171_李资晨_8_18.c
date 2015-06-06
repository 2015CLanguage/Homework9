#include <stdio.h>
int main()
{
    char *p[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int n;
    printf("input month:\n");
    scanf("%d",&n);
    if((n>=1)&&(n<=12))
        printf(*(p+n-1));
    else
        printf("wrong");
        return 0;
}
