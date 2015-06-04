#include<stdio.h>
int main()
{
char *a[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
int t;
printf("输入数字：\n");
scanf("%d",&t);
printf("%s",*(a+t-1));
return 0;
}
