#include <stdio.h>
#include <string.h>
int cmp(char *p1,char *p2);
void main()
{
     char ch1[80],ch2[80];
     int ch;
     printf("请输入第一个字符串:\n");
     gets(ch1);
     printf("请输入第二个字符串:\n");
     gets(ch2);
     ch=cmp(ch1,ch2);
     printf("结果为:%d\n",ch);
}
int cmp(char *p1,char *p2)
{
     int i,j,p;
     for(i=0,j=0;i<strlen(p1),j<strlen(p2);i++,j++)
     {
         if(p1[i]==p2[j])
             p=0;
         else
             p=*(p1+i)-*(p2+j);
         if(p!=0)
             break;
     }
     return p;
}
