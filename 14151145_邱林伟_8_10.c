#include<stdio.h>
void change(int *p);
void main()
{
	int i,j,*p1,a[5][5];
	printf("请输入一个5x5矩阵:");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%4d",a[i][j]);}
		printf("\n");
	}
	p1=&a[0][0];
	change(p1);
	printf("现在的矩阵为:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%4d",a[i][j]);}//输出转换后的矩阵
		printf("\n");
	}
}

void change(int *p)
{
	int i,j,*max,*min,t;
	max=p;
	min=p;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{if(*max<*(p+i*5+j))
		max=p+i*5+j;//找出最大值
		if(*min>*(p+i*5+j))
			min=p+i*5+j;}//找出最小值
	}
    t=*(p+12);
	*(p+12)=*max;
    *max=t;

	t=*p;
	*p=*min;
	*min=t;

	min=p+1;
    for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{   if(i==0&&j==0)continue;
			if(*min>*(p+i*5+j))
				min=p+i*5+j;}//找出第二小值
	}
	t=*(p+4);
	*(p+4)=*min;
	*min=t;

	min=p+1;
     for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{   if((i==0&&j==0)||(i==0&&j==4))continue;
			if(*min>*(p+i*5+j))
				min=p+i*5+j;}//找出第三小值
	}
    t=*(p+20);
	*(p+20)=*min;
	*min=t;
    
	min=p+1;
     for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{   if((i==0&&j==0)||(i==0&&j==4)||(i==4&&j==0))continue;
			if(*min>*(p+i*5+j))
				min=p+i*5+j;}//找出第四小值
	}
    t=*(p+24);
    *(p+24)=*min;
	*min=t;
}
