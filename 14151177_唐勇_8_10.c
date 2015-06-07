#include<stdio.h>
void main()
{
    int CJ(int *);
    int a[5][5],i,j,*p;
    p=&a[0][0];
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
        CJ(p);
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
                printf("%4d",a[i][j]);
            printf("\n");
        }
}
int CJ(int *q)
{
    int i,j,*qmax,*qmin,t;
    qmax=q;
    qmin=q;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
        {
            if(*qmax<*(q+5*i+j))
                qmax=q+5*i+j;
            if(*qmin>*(q+5*i+j))
                qmin=q+5*i+j;
        }
        t=*(q+12);
        *(q+12)=*qmax;
        *qmax=t;
        t=*q;
        *q=*qmin;
        *qmin=t;
        qmin=(q+1);
        for(i=0;i<5;i++)
            for(j=0;j<5;j++)
                if((q+5*i+j)!=q&&*qmin>*(q+5*i+j))
                    qmin=q+5*i+j;
            t=*(q+4);
            *(q+4)=*qmin;
            *qmin=t;
            qmin=(q+1);
            for(i=0;i<5;i++)
                for(j=0;j<5;j++)
                    if((q+5*i+j)!=q&&(q+5*i+j)!=(q+4)&&*qmin>*(q+5*i+j))
                        qmin=(q+5*i+j);
                    printf("第三小元素为%3d\n",*qmin);
                    t=*(q+20);
                    *(q+20)=*qmin;
                    *qmin=t;
                    qmin=(q+1);
                    for(i=0;i<5;i++)
                        for(j=0;j<5;j++)
                            if((q+5*i+j)!=q&&(q+5*i+j)!=(q+4)&&(q+5*i+j)!=(q+20)&&*qmin>*(q+5*i+j))
                                qmin=(q+5*i+j);
                            printf("第四小元素为%3d\n",*qmin);
                            t=*(q+24);
                            *(q+24)=*qmin;
                            *qmin=t;
                            return 0;
}
