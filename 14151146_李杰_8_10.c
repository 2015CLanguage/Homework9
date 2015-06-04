#include<stdio.h>
void input(int *x, int y)
{
	int i;
	printf("请输入line_%d：",y+1);
	for(i=0;i<5;i++)
	{
		scanf("%d",x+i);
	}
}
void change(int*x)
{
	int temp,* min,* max,i,j;
	max=x;min=x;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(*max<*(x+5*i+j)) max=x+5*i+j;
			if(*min>*(x+5*i+j)) min=x+5*i+j;		
		}
	}
	temp=*(x+12);*(x+12)=*max;*max=temp;
	temp=*x;*x=*min;*min=temp;
	min=x+1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(((x+5*i+j)!=x)&&(*min>*(x+5*i+j))) min=x+5*i+j;
	temp=*min;*min=*(x+4);*(x+4)=temp;
	min=x+1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(((x+5*i+j)!=(x+4))&&((x+5*i+j)!=x)&&(*min>*(x+5*i+j)))
				min=x+5*i+j;
	temp=*min;*min=*(x+20);*(x+20)=temp;
	min=x+1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(((x+5*i+j)!=(x+20))&&((x+5*i+j)!=(x+4))&&((x+5*i+j)!=x)&&(*min>*(x+5*i+j)))
				min=x+5*i+j;
	temp=*min;*min=*(x+24);*(x+24)=temp;
}
void main()
{
	int num[5][5],*p,j,i;
	for(i=0;i<5;i++)
		input(num[i],i);
	p=&num[0][0];
	change(p);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		printf("%4d",num[i][j]);
		printf("\n");
	}
}
