#include <stdio.h>
char st1[100],st2[100];
char *p1,*p2;
int strcmp(char *p1,char*p2)
{
    int i=0;
    while (*(p1+i) == *(p2+i))
	{
	    if (*(p1+i++)=='\0')  
		{
			return 0;
		}
	}
    return (*(p1+i)-*(p2+i));
}
int main()
{
	printf("请依次输入两个要进行比较的字符串:");
    scanf("%s%s",st1,st2);
    p1=&st1[0];
    p2=&st2[0];
    printf("两字符串ASCII码差值为%d.\n",strcmp(p1,p2));
    return 0;
}
