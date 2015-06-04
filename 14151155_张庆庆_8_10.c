#include<stdio.h>
void change(int *p);
int main()
{
             int a[5][5],i,j,*p;
             printf("请输入二维数组各元素：\n");
             for(i=0;i<5;i++)
             {
               for(j=0;j<5;j++)
               scanf("%d",&a[i][j]);
             }
               p=&a[0][0];
               change(p);
               printf("变换后的数组是：\n");
               for(i=0;i<5;i++)
               {
                  for(j=0;j<5;j++)
                   printf("%d ",a[i][j],' ');
                   printf("\n");
                }
                return 0;
}
void change(int *p)
{
             int i,j,t;
             int*pmin,*pmax;
             pmax=p;
             pmin=p;
             for(i=0;i<5;i++)
               for(j=i;j<5;j++)
               {
               if(*pmax<*(p+5*i+j))
               pmax=p+5*i+j;
               if(*pmin>*(p+5*i+j))
               pmin=p+5*i+j;
               }
             t=*(p+12);
             *(p+12)=*pmax;
             *pmax=t;


             t=*p;
             *p=*pmin;
             *pmin=t;


             pmin=p+1;

             for(i=0;i<5;i++)
               for(j=0;j<5;j++)
             {
               if(i==0&&j==00)continue ;
               if(*pmin>*(p+5*i+j))pmin=p+5*i+j;
             }
             t=*pmin;
             *pmin=*(p+4);
             *(p+4)=t;

             pmin=p+1;

             for(i=0;i<5;i++)
               for(j=0;j<5;j++)
             {
               if(i==0&&j==00||(i==0&&j==4))continue ;
               if(*pmin>*(p+5*i+j))pmin=p+5*i+j;
             }
             t=*pmin;
             *pmin=*(p+20);
             *(p+20)=t;

             pmin=p+1;
             for(i=0;i<5;i++)
               for(j=0;j<5;j++)
               {
               if(i==0&&j==0||(i==0&&j==4)||(i==4&&j==0))continue ;
               if(*pmin>*(p+5*i+j))pmin=p+5*i+j;
               }
             t=*pmin;
             *pmin=*(p+24);
             *(p+24)=t;
}
