#include <stdio.h>

int a[5][5];
int *p;


void swap(int *p)
{
    int i,j,t,x;
    int a[25],b[25],cnt=0;
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            *(a+cnt) =*(p+5*i+j);
            *(b+cnt)=cnt;
            cnt++;
        }

    }
    for (i=0; i<cnt; i++)
        for (j=i+1; j<cnt; j++)
        if (*(a+i) > *(a+j))
        {
            t=*(a+i);
            *(a+i)=*(a+j);
            *(a+j)=t;

            t=*(b+i);
            *(b+i)=*(b+j);
            *(b+j)=t;
        }
        //max;
        x=*(b+cnt-1);
        t=*(p+x);*(p+x)=*(p+12);*(p+12)=t;

        x=*(b+0);
        t=*p; *p=*(p+x); *(p+x)=t;

        x=*(b+1);
        t=*(p+4); *(p+4)=*(p+x); *(p+x)=t;

        x=*(b+2);
        t=*(p+20); *(p+20)=*(p+x); *(p+x)=t;

        x=*(b+3);
        t=*(p+24); *(p+24)=*(p+x); *(p+x)=t;

}
int main()
{
    int i,j;
    freopen("1.in","r",stdin);
    for (i=0; i<5; i++)
        for (j=0; j<5; j++)
        scanf("%d",&a[i][j]);
    p=&a[0][0];
    swap(p);
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
	return 0;
}
