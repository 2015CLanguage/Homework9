#include<stdio.h>
void chuli(int * p);
void sort(int * p1,int * p2);
int main()
{
	int i,j,a[5][5],* p;
	printf("请输入5X5阶矩阵:\n");
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	p=&a[0][0];
	chuli(p);
	for(i=0;i<5;i++)
		{for(j=0;j<5;j++)
			 printf("%5d",a[i][j]);
		 printf("\n");
		}
	return 0;
}

void chuli(int *p)
{
	int * max,* min,i,j,* n;
	min=max=p;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			{if(* max<* (p+5*i+j))
				 max=p+5*i+j;
			 if(* min>* (p+5*i+j))
				 min=p+5*i+j;
			}
	n=p+12;
	sort(n,max);
	n=p;
	sort(n,min);
	
	min=p+1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(((p+5*i+j)!=p)&&(* min>* (p+5*i+j)))
				 min=p+5*i+j;
	n=p+4;
	sort(n,min);

	min=p+1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if((p+5*i+j!=p)&&((p+5*i+j)!=(p+4))&&(* min>* (p+5*i+j)))
				 min=p+5*i+j;
	n=p+20;
	sort(n,min);

	min=p+1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if((p+5*i+j!=p)&&((p+5*i+j)!=(p+4))&&((p+5*i+j)!=(p+20))&&(* min>* (p+5*i+j)))
				 min=p+5*i+j;
	n=p+24;
	sort(n,min);
}

void sort(int * p1,int * p2)
{
	int t;
	t=* p1;
	* p1=* p2;
	* p2=t;
}
