#include<stdio.h>
#include<string.h>
void sort(char a[][3]);
int main()
{
    char a[10][3];
    int i;
    printf("please input your strings:\n");
    for(i=0;i<10;i++)
        {scanf("%s",a[i]);
         }
    sort(a);
    printf("new strings:\n");
    for(i=0;i<10;i++)
        {printf("%s\n",a[i]);
         }
    return 0;
}
void sort(char a[][3])
{
    int i,j;
    char temp[3],*q;
    q=temp;
    for(i=1;i<10;i++)
        for(j=0;j<10-i;j++)
            if(strcmp(a[j],a[j+1])>0)
                {
                    strcpy(q,a[j+1]);
                    strcpy(a[j+1],a[j]);
                    strcpy(a[j],q);
                }
}
