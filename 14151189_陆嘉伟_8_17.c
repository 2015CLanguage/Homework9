#include<stdio.h>
int main()
{
int fun(char a[100],char b[100],int t);
char a[100],b[100];
int t;
printf("输入第一个字符串：\n");
gets(a);
printf("输入第二个字符串：\n");
gets(b);
t=fun(a,b,t);
printf("%d",t);
return 0;
}

int fun(char a[100],char b[100],int t)
{
int i;
for(i=0;*(a+i)!='\0';i++)
{
	if(*(a+i)!=*(b+i))
	{
		t=*(a+i)-*(b+i);
		break;
}
	else
		t=0;
}
return t;
}
