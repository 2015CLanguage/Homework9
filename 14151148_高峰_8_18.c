#include<stdio.h>
int main()
{
	char *m[12]={"January","February","March","April","May","June","July","August","September","October","Noxember","December"};
	int n;
	printf("请输入月份n=");
	scanf("%d",&n);
	if(n>0&&n<=12)
		printf("%d月是%s\n",n,*(m+n-1));
	else
		printf("输入有误");
	return 0;
}
