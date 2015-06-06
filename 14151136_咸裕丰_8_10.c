#include"stdio.h"
void change(int *p);
int main()
{
	int a[5][5],*p,i,j;
	printf("请输入一个5*5的矩阵:\n");
	for(i=0;i<5;i++)
	   for(j=0;j<5;j++)
	      scanf("%d",&a[i][j]);
	p=&a[0][0];
	change(p);
	printf("变换后的矩阵为:\n");
	for(i=0;i<5;i++)
	{
	   for(j=0;j<5;j++)
	      printf("%-3d",a[i][j]);
	   printf("\n");
	}
	return 0;
}

void change(int *p)
{
	int i,j,t;
	int *max,*min;
	max=p; min=p;
	for(i=0;i<5;i++)
	   for(j=0;j<5;j++)
	   {
	   	if(*max<*(p+5*i+j)) max=p+5*i+j;
	   	if(*min>*(p+5*i+j)) min=p+5*i+j;
	   }
	t=*(p+12); *(p+12)=*max; *max=t;
	t=*p; *p=*min; *min=t;
	min=p+1;
	for(i=0;i<5;i++)
	   for(j=0;j<5;j++)
	      if(((p+5*i+j)!=p)&&(*min>*(p+5*i+j)))	min=p+5*i+j;
	t=*min; *min=*(p+4); *(p+4)=t;
	min=p+1;
	for(i=0;i<5;i++)
	   for(j=0;j<5;j++)
	      if(((p+5*i+j)!=(p+4))&&((p+5*i+j)!=p)&&(*min>*(p+5*i+j)))	min=p+5*i+j;
    t=*min; *min=*(p+20); *(p+20)=t;	
    min=p+1;
    for(i=0;i<5;i++)
	   for(j=0;j<5;j++)
	      if(((p+5*i+j)!=(p+20))&&((p+5*i+j)!=(p+4))&&((p+5*i+j)!=p)&&(*min>*(p+5*i+j))) min=p+5*i+j;
    t=*min; *min=*(p+24); *(p+24)=t;
} 
