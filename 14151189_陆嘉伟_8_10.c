#include<stdio.h>
int main()
{
void fun1(int *p);
void fun2(int *p);
int a[5][5],i,j;
int *p;
printf("输入数组：\n");
for(i=0;i<5;i++)
	for(j=0;j<5;j++)
		scanf("%d",&a[i][j]);
p=&a[0][0];
fun1(p);
fun2(p);
printf("交换后的数组：\n");
for(i=0;i<5;i++)
	{2
	for(j=0;j<5;j++)
		printf("%d ",a[i][j]);
		printf("\n");
}
return 0;3
}


void fun1(int *p)
{
int i,j,temp;
int *pmin,*pmax;
pmin=p;
pmax=p;
for(i=0;i<5;i++)
	for(j=0;j<5;j++)
		{
		if(*pmax<*(p+5*i+j))
			pmax=p+5*i+j;
		if(*pmin>*(p+5*i+j))
			pmin=p+5*i+j;
		}
temp=*pmax;*pmax=*(p+12);*(p+12)=temp;
temp=*pmin;*pmin=*p;*p=temp;	
}



void fun2(int *p)
{
int i,j,temp;
int *pm;
pm=p+1;
for(i=0;i<5;i++)
	for(j=0;j<5;j++)
		if((*(p+5*i+j)>*p)&&(*pm>*(p+5*i+j)))
			pm=p+5*i+j;
temp=*pm;
*pm=*(p+4);
*(p+4)=temp;

pm=p+1;
for(i=0;i<5;i++)
	for(j=0;j<5;j++)
		if(((*(p+5*i+j)>*p)&&(*(p+5*i+j)>*(p+4)))&&(*pm>*(p+5*i+j)))
			pm=p+5*i+j;
temp=*pm;
*pm=*(p+20);
*(p+20)=temp;


pm=p+1;
for(i=0;i<5;i++)
	for(j=0;j<5;j++)
		if(((((*(p+5*i+j)>*p)&&(*(p+5*i+j)>*(p+4))))&&(*(p+5*i+j)>*(p+20)))&&(*pm>*(p+5*i+j)))
			pm=p+5*i+j;
temp=*pm;
*pm=*(p+24);
*(p+24)=temp;
}
