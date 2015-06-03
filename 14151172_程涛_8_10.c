#include <stdio.h>
int intut(int(a[5][5]))
{
    int i,j;
    printf("please intut data:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        scanf("%d",&a[i][j]);
    }
    return 0;
}

int change(int(a[5][5]))
{
    int *max,*min,*t,i,j,s;
    max=*a;
    min=*a;
    t=*a;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(*max<*(t+i*5+j)) max=t+i*5+j;
            if(*min>*(t+i*5+j)) min=t+i*5+j;
        }

    }
    s=*(t+12);
    *(t+12)=*max;
    *max=s;
    s=*t;
    *t=*min;
    *min=s;//最大值换为中心元素，最小值换到左上角元素
    min=t+1;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(((t+5*i+j)!=t)&&(*min>*(t+5*i+j))) min=t+5*i+j;
        }
    }
    s=*(t+4);
    *(t+4)=*min;
    *min=s;//第二小值交换给右上角的元素
    min=t+1;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(((t+5*i+j)!=t)&&((t+5*i+j)!=(t+4))&&(*min>*(t+5*i+j))) min=t+5*i+j;
        }
    }
    s=*(t+20);
    *(t+20)=*min;
    *min=s;//将第三小值交换给左下角元素
    min=t+1;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(((t+5*i+j)!=t)&&((t+5*i+j)!=(t+4))&&((t+5*i+j)!=(t+20))&&(*min>*(t+5*i+j))) min=t+5*i+j;
        }
    }
    s=*(t+24);
    *(t+24)=*min;
    *min=s;//将最小值元素交换给右下角元素
    return 0;
}

int main()
{
    int a[5][5],i,j;
    intut(a);
    change(a);
    printf("经过转变后的矩阵为：\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++) {
            printf("%-3d ",a[i][j]);
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
