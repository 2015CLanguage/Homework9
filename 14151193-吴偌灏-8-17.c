#include<stdio.h>
int cmp(char *p1,char *p2)
{
	int i=0,a;
	while(*(p1+i)==*(p2+i)&&*(p1+i)!='\0'&&*(p2+i)!='\0')
	{
		i++;
	}
	a=*(p1+i)-*(p2+i);
	return a;
}
void main()
{
	char str1[50],str2[50];
	gets(str1);gets(str2);
	printf("%d\n",cmp(str1,str2));
}
