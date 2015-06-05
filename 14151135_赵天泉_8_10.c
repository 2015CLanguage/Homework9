#include<stdio.h>
void change(int *p);
int main()
{
	int a[5][5],i,j,*p;
	printf("请输入一个五行五列的矩阵：\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%5d",&a[i][j]);
		printf("\n");
	}
	p=&a[0][0];
	change(p);
	printf("新矩阵为：\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	return 0;
}
void change(int *p)
{
	int i,j,t;
	int *max,*min;
	max=p;
	min=p;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			if(*max<*(p+i*5+j))
				max=p+i*5+j;
			if(*min>*(p+i*5+j))
				min=p+i*5+j;
		}

	t=*(p+12);
	*(p+12)=*max;
	*max=t;

	t=*p;
	*p=*min;
	*min=t;

	min=p+1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			if(((p+5*i+j)!=p)&&(*min>*(p+i*5+j)))
				min=p+i*5+j;
		}

	t=*min;
	*min=*(p+4);
	*(p+4)=t;

	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			if(((p+5*i+j)!=p)&&((p+5*i+j)!=(p+4))&&(*min>*(p+i*5+j)))
				min=p+i*5+j;
		}

	t=*min;
	*min=*(p+20);
	*(p+20)=t;

	min=p+1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			if(((p+5*i+j)!=p)&&((p+5*i+j)!=(p+4))&&((p+5*i+j)!=(p+20))&&(*min>*(p+i*5+j)))
				min=p+i*5+j;
		}

	t=*min;
	*min=*(p+24);
	*(p+24)=t;
}
