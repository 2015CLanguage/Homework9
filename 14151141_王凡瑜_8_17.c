#include<stdio.h>
#define S1 "BOY"
#define S2 "BAD"

int strcmp(char *p1,char *p2);

void main()
{
	char *s[2];
	*s=S1;
	*(s+1)=S2;
	//printf("%s\n%s\n",*s,*(s+1));
	int res=strcmp(*s,*(s+1));
	switch(res)
	{
	case  1000: printf("String 1 is part of String 2.\n");break;
	case -1000: printf("String 1 includes String 2.\n");break;
	default   : printf("The result of comparsion is %d.\n",res);
	}
}

int strcmp(char *p1,char *p2)
{
	int i;
	for(i=0;*(p1+i)!='\0'&&*(p2+i)!='\0';i++)
	{
		if(int(*(p1+i))!=int(*(p2+i)))
			return int(*(p1+i))-int(*(p2+i)); 
	}
	if(*(p1+i)=='\0'&&*(p2+i)=='\0')
		return 0;
	if(*(p1+i)=='\0'&&*(p2+i)!='\0')
		return 1000;
	if(*(p1+i)!='\0'&&*(p2+i)=='\0')
		return -1000;
}
