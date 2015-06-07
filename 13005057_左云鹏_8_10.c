#include<stdio.h>
void change(int *p);
int main()
{
	int a[5][5],*p,i,j;
	printf("请输入5*5二维数组：\n");//输入
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%5d",&a[i][j]);
	}
	
	p=&a[0][0];
	change(p);

	printf("\n转换后的数组为：\n");//输出
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++);
			printf("%5d",a[i][j]);
		printf("\n");
	}
	return 0;
}

void change(int *p)
{
	int i,j,temp;
	int *pmax,*pmin;
	pmax=p;
	pmin=p;
	
	for(i=0;i<5;i++)
	{	
		for(j=0;j<5;j++)
		{
			if(*pmax<*(p+i*5+j))//找出最大最小值
				pmax=p+i*5+j;
			if(*pmin>*(p+i*5+j))
				pmin=p+i*5+j;	
		}
	}

		temp=*(p+12);//交换
		*(p+12)=*pmax;
		*pmax=temp;
		
		temp=*p;
		*p=*pmin;
		*pmin=temp;
		pmin=p+1;

		for(i=0;i<5;i++)//找次小值
		{
			for(j=0;j<5;j++)
			{
				if(((p+i*5+j)!=p)&&(*pmin>*(p+i*5+j)))
					pmin=p+i*5+j;
			}
		}
		temp=*pmin;//交换
		*pmin=*(p+4);
		*(p+4)=temp;
		pmin=p+1;

		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(((p+i*5+j)!=p)&&((p+i*5+j)!=(p+4))&&(*pmin>*(p+i*5+j)))
					pmin=p+i*5+j;
			}
		}
		temp=*pmin;
		*pmin=*(p+20);
		*(p+20)=temp;
		pmin=p+1;

		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(((p+i*5+j)!=p)&&((p+i*5+j)!=(p+4))&&((p+i*5+j)!=(p+20))&&(*pmin>*(p+i*5+j)))
					pmin=p+i*5+j;
			}
		}
		temp=*pmin;
		*pmin=*(p+24);
		*(p+24)=temp;
	
}
