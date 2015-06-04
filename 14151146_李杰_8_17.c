#include<stdio.h>
int strcmp(char *p1,char *p2)
{
	int i;
	i=0;
	while((*(p1+i)!='\0')&&(*(p2+i)!='\0'))
	{
		if(*(p1+i)!=*(p2+i))
			return(*(p1+i)-*(p2+i));
		i++;
	}
	return 0;
}
void main()
{
	char s1[10],s2[10];
	printf("Please input s1:");
	gets(s1);
	printf("Please input s2:");
	gets(s2);
	printf("%d\n",strcmp(s1,s2));
}
