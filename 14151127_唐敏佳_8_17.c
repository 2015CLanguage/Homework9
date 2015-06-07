#include <stdio.h>

int main()
{
    char s1[20],s2[20],*p1,*p2;
    int n;
    printf("请输入字符串s1：\n");
    scanf("%s",s1);
    printf("请输入字符串s2：\n");
    scanf("%s",s2);
    p1=&s1[0];
    p2=&s2[0];
    n=strcmp(p1,p2);
    printf("两个字符串的差为：%d\n",n);
    return 0;
}

strcmp(char *p1,char *p2)
{
    int i=0;
    while(*(p1+i)==*(p2+i))
    {
        i++;
        if(*(p1+i)=='\0')
            return 0;
    }
    return (*(p1+i)-*(p2+i));
}
