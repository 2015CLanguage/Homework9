#include"stdio.h"
int main()
{
	char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int n;
	printf("请输入月份号:");
	scanf("%d",&n);
	if((n>=1)&&(n<=12))
	  printf("英文月名为:%s\n",*(month+n-1));
	else
	  printf("月份输入错误\n");
	return 0;
}
