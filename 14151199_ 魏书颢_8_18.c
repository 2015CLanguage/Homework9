#include"stdio.h"
void main()
{
	char *months[13]={"January","February","March","April","May","June","July","August","September","October","November","December","illegal"};
	int n;
	printf("输入月份的数字\n");
	scanf("%d",&n);
	if((n>=1)&&(n<=12))
		printf("%s\n",*(months+n-1));
	else
		printf("不合法");
}
