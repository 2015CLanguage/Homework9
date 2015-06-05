#include<stdio.h>
void change(float *p);
int main()
{
	int i,j;
	float a[5][5];
	printf("请输入一个5×5的矩阵\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%f",&a[i][j]);
	}
	printf("这个矩阵是：\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%8.2f",a[i][j]);
		printf("\n");
	}
	change(*a);
	printf("调换后，矩阵是：\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%8.2f",a[i][j]);
		printf("\n");
	}
	return 0;
}
void change(float *p)
{
	int i,j;
	float *max,*min,temp;
	max=min=p;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)//寻找最大值，第一次寻找最小值
		{
			if(*max<*(p+5*i+j))
				max=(p+5*i+j);
			if(*min>*(p+5*i+j))
				min=(p+5*i+j);
		}
	}
	temp=*(p+12);//将最大值和矩阵中间的那个数交换
	*(p+12)=*max;
	*max=temp;
	temp=*p;//将最小值和左上角的数交换
	*p=*min;
	*min=temp;
	min=p+1;//将最小值指向第一行第二列的数
	for(i=0;i<5;i++)//第二次寻找最小值
	{
		for(j=0;j<5;j++)
		{
			if(5*i+j==0)
				continue;
			else if(*min>*(p+5*i+j))
				min=(p+5*i+j);
		}
	}
	temp=*(p+4);
	*(p+4)=*min;
	*min=temp;
	min=p+1;
	for(i=0;i<5;i++)//第三次寻找最小值
	{
		for(j=0;j<5;j++)
		{
			if(5*i+j==0||5*i+j==4)
				continue;
			else if(*min>*(p+5*i+j))
				min=(p+5*i+j);
		}
	}
	temp=*(p+20);
	*(p+20)=*min;
	*min=temp;
	min=p+1;
	for(i=0;i<5;i++)//第四次寻找最小值
	{
		for(j=0;j<5;j++)
		{
			if(5*i+j==0||5*i+j==4||5*i+j==20)
				continue;
			else if(*min>*(p+5*i+j))
				min=(p+5*i+j);
		}
	}
	temp=*(p+24);
	*(p+24)=*min;
	*min=temp;
}
