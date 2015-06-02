#include<stdio.h>
void main()
{
	char * name[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int num;
	printf("请输入月份：\n");
	scanf("%d",&num);
	if((num>0)&&(num<13))
	    printf("The English name is %s\n ",*(name+num-1));
	else
      printf("it is wrong\n");
}
