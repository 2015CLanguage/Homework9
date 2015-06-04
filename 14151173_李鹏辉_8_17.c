#include<stdio.h>
int cmp(char a[5],char b[5])
{
	int i,s;
	for(i=0;i<5;i++)
	{
		if(a[i]!=b[i])
		{
			s=(int)a[i]-b[i];
		    break;
		}
	}
	if(i==5) s=0;
	return (s);
}

void main()
{ 
	char a[5],b[5];
	int s;
	puts("please input a:");
	gets(a);
	puts("please input b:");
	gets(b);
	s=cmp(a,b);
	puts("the result is :");
	if(s==0) printf("a=b\n");
	else if (s>0) printf("a>b\n");
	else printf("a<b\n");
}
