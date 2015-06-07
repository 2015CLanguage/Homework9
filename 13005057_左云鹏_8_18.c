#include<stdio.h>

int main()
{
	int n;
	char *name[13]={"error","Jan.","Feb.","Mar.","Apr.","May","June","July","Aug.","Sep.","Oct.","Nov.","Dec."};
	

	printf("请输入月份：\n");
	scanf("%d",&n);

	if((n<=12)&&(n>=1))
		printf("月份为：%s\n",*(name+n));
	else
		printf("输入错误。\n");
	return 0;

}
