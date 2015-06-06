Enter file contents here
# include <stdio.h>
int main()
{
	char *a[12] = { "January","Feberuary","March","April","May","June","July","August","Sptember","October","Novermber","December" };
	int n;
	printf("请输入一个的整数：\n");
	scanf_s("%d", &n);
	if (n > 12 || n <= 0)
	printf("输入错误\n");
	else
		printf("%s\n", *(a + n - 1));
	return 0;
