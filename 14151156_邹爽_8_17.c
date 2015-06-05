#include <stdio.h>
int strcmp(char(str1[20]),char(str2[20]))
{
    int i,m=0;
    char *p1,*p2;
    p1=&str1[0];
    p2=&str2[0];
    for(i=0;(*(p1+i)!='\0')||(*(p2+i)!='\0');i++)
    {
        if(*(p1+i)!=*(p2+i))
        {
                m=*(p1+i)-*(p2+i);
                break;
        }
    }
    return m;
}
void main()
{
    int s;
    char str1[20],str2[20];
    printf("please input two strings:\n");
    scanf("%s",str1);
    scanf("%s",str2);
    s=strcmp(str1,str2);
    printf("the result is:%d",s);
    printf("\n");
}
