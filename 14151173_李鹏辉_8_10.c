#include<stdio.h>
void change(int *a)
{
	int i,j,*max,*min,t;
	max=a;
	min=a;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(*(a+5*i+j)>*max)
			   max=a+5*i+j;		  
		}
	}
	t=*max;
	*max=*(a+12);
    *(a+12)=t;
    for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(*(a+5*i+j)<*min)
			   min=a+5*i+j;		  
		}
	}
	printf("%d",*a);
	t=*min;
	*min=*a;
    *a=t;
	printf("%d",*min);
	min=a+1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(*(a+5*i+j)<*min && *(a+5*i+j)>=*a)
			   min=a+5*i+j;	  
		}
	}
	t=*min;
	*min=*(a+4);
    *(a+4)=t;
	min=a+1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(*(a+5*i+j)<*min && *(a+5*i+j)>=*(a+4))
			   min=a+5*i+j;		  
		}
	}
	t=*min;
	*min=*(a+20);
    *(a+20)=t;
	min=a+2;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(*(a+5*i+j)<*min && *(a+5*i+j)>=*(a+20))
			   min=a+5*i+j;	  
		}
	}
	t=*min;
	*min=*(a+24);
    *(a+24)=t;
}

void main()
{
    int a[5][5],i,j,*p=a[0];
    puts("请输入数据:");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	puts("数据是:");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	change(p);
	puts("变化后的是:");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
