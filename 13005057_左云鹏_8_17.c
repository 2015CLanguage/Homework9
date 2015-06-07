#include<stdio.h>
int strcmp(char *p1,char *p2);

int main()
{
	int m;
	char str1[20],str2[20],*p1,*p2;

	printf("请输入两个字符串：\n");//输入
	scanf("%s",str1);
	scanf("%s",str2);

	p1=&str1[0];
	p2=&str2[0];

	m=strcmp(p1,p2);//调用

	printf("结果为：%d\n",m);

	return 0;

}

strcmp(char *p1,char *p2)//定义比较函数
{
	int i=0;
	while(*(p1+i)==*(p2+i))
		if(*(p1+i++)=='\0')return(0);
		return(*(p1+i)-*(p2+i));
}
