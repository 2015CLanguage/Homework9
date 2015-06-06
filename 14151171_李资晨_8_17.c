#include<stdio.h>
int main()
{
    int m;
    char strl[20],str2[20],*p1,*p2;
    printf("请输入两组字符:\n");
    scanf("%s",str1);
    scanf("%s",str2);
    p1=&strl[0];
    p2=&str2[0];
    m=strcmp(p1,p2);
    printf("输出结果为：d,\n",m);
    return 0
}
strcmp(char *p1,char *p2)
{

    int i;
    i=0;
    while(*(p1+i)==*(p2+i))
        if(*(p1+i++)=='\0')
        return (0);
    return(*(p1+i)-*(p2+i);

}
