#include <stdio.h>
int strcmp(char *p1, char *p2){
    int i,m=0;
    for(i=0;(*(p1+i)!='\0')||(*(p2+i)!='\0');i++){
        if(*(p1+i)!=*(p2+i)){
                m=*(p1+i)-*(p2+i);
                break;
        }
    }
    return m;
}
void main()
{
    char s1[20],s2[20],*p1,*p2;
    int m;
    gets(s1);
    gets(s2);
    p1=s1;
    p2=s2;
    m=strcmp(p1,p2);
    printf("%d",m);
}
