#include <stdio.h>
int main()
{
	char *month[13]={"illegal month","Jaunary","February","March","April","May","June","July","August","September","October","November","December"};
	int n;
	printf("请输入月份:\n");
	scanf("%d",&n);
	if((n<=12)&&(n>=1))
	    printf("%s",*(month+n));
	else
	    printf("数据错误");
return 0;}
