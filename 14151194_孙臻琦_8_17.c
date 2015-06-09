#include<stdio.h>
void main()
{
	int strcmp(char *p1, char *p2);
	char a[]="CHINA",b[]="Chen";
    printf("%d\n",strcmp(a,b));
}
int strcmp(char *p1, char *p2)
{
	for(;*p1==*p2;p1++,p2++)
	{
		if((*(p1+1)=='/0')&&(*(p2+1)=='/0'))
		{ 
		    return 0;
		    break;
		}
		else if((*(p1+1)=='/0')&&(*(p2+1)!='/0'))
		{
		    return *p1-*p2;
			break;
		}
	}
	return *p1-*p2;
}
