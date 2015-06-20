#include<stdio.h>
int main()
{
    int strcmp(char *p1,char *p2);
    char s1[10],s2[10];
    printf("input 2 strings:");
    scanf("%s",s1);
    scanf("%s",s2);
    char *p1,*p2;
    int k;
    p1=s1;
    p2=s2;
    k=strcmp(p1,p2);
    printf("%d",k);
    return 0;
}
int strcmp(char *p1,char *p2)
{
    int i,p=0;
    for(i=0;*(p1+i)!='\0'&&*(p1+i)!='\0';i++)
        if(*(p1+i)!=*(p2+i))
           {p=*(p1+i)-*(p2+i);
            break;
           }
    return(p);
}
