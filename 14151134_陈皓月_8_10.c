#include<stdio.h>
void exchange(int *p);
void main()
{
	int *p,i,j,a[5][5]={{35,34,33,32,31},{30,29,28,27,26},{25,24,23,22,21},{20,19,18,17,16},{15,14,13,12,11}};
	printf("原矩阵为\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}	
	p=&a[0][0];
	exchange(p);
	printf("现矩阵为\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
}
void exchange(int *p)
{
	int i,j,temp,*p1,*p2;
	p1=p;
	p2=p;
	for(j=0;j<5;j++)
		for(i=j;i<5;i++)
		{
			if(*p2<*(p+5*j+i))
				p2=p+5*j+i;             
			if(*p1>*(p+5*j+i))
				p1=p+5*j+i;
		}
	temp=*(p+12);
	*(p+12)=*p2;
	*p2=temp;
	temp=*p;
	*p=*p1;
	*p1=temp;
	p1=p+1;
	for(j=0;j<5;j++)
		for(i=0;i<5;i++)
		{
			if(i==0&&j==0)
				continue;
			if(*p1>*(p+5*j+i))
				p1=p+5*j+i;
		}
	temp=*p1;
	*p1=*(p+4);
	*(p+4)=temp;
	p1=p+1;
	for(j=0;j<5;j++)
		for(i=0;i<5;i++)
		{
			if((i==0&&j==0)||(i==4&&j==0))
				continue;
			if(*p1>*(p+5*j+i))
				p1=p+5*j+i;
		}
	temp=*p1;
	*p1=*(p+20);
	*(p+20)=temp;
	p1=p+1;
	for(j=0;j<5;j++)
		for(i=0;i<5;i++)
		{
			if((i==0&&j==0)||(i==4&&j==0)||(i==0&&j==4))
				continue;
			if(*p1>*(p+5*j+i))
				p1=p+5*j+i;
		}
	temp=*p1;
	*p1=*(p+24);
	*(p+24)=temp;
}
