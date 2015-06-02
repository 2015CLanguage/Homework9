#include <stdio.h>
void deal(int a[5][5]);
int main()
{
    printf("请输入原始矩阵:\n");
    int a[5][5];
    int i,j;
    for (i=0; i<5;i++)
    {
        for (j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    }
    deal(a);
    printf("转换后为:\n");
    for (i=0; i<5;i++)
    {
        for (j=0;j<5;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    return 0;
}


void deal(int a[5][5])
{
    int *p,i,j;
    int temp;
    p=a[0];
    for (i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(*p<a[i][j])
                p=(a[i]+j);
        }
    }
    temp=*p;
    *p=a[2][2];
    a[2][2]=temp;
    
    int *p1,*p2,*p3,*p4;
    p1=a[0];
    p2=a[0]+1;
    p3=a[0]+2;
    p4=a[0]+3;
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(*p1>a[i][j])
                p1=(a[i]+j);
        }
    }
    temp=*p1;
    *p1=a[0][0];
    a[0][0]=temp;
    
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if (i==0&&j==0)
            {
                continue;
            }
            if(*p2>a[i][j])
                p2=(a[i]+j);
        }
    }
    temp=*p2;
    *p2=a[0][4];
    a[0][4]=temp;


    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if ((i==0&&j==0)||(i==0&&j==4))
            {
                continue;
            }
            if(*p3>a[i][j])
                p3=(a[i]+j);
        }
    }
    temp=*p3;
    *p3=a[4][0];
    a[4][0]=temp;


    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if ((i==0&&j==0)||(i==0&&j==4)||(i==4&&j==0))
            {
                continue;
            }
            if(*p4>a[i][j])
                p4=(a[i]+j);
        }
    }
    temp=*p4;
    *p4=a[4][4];
    a[4][4]=temp;
}
