# include<stdio.h>
int main(void)
{
	char *month_name[13]={"illegal","January","February","March","April","May","June","July","August","September","October","November","December"};
		int n;
	printf("输入月份号：");
	scanf("%d",&n);
	if((n<=12)&&(n>1))
		printf("对应的英文名称是：%s\n",*(month_name+n));
		else
		printf("illegal\n");
		return 0;

}
}
}
