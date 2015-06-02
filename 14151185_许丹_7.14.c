#include<stdio.h>
int main()
{
	void average1(int a[][5]);
	void average2(int a[][5]);
	void search(int a[][5]);
	void variance(int a[][5]);
	int a[10][5],i,j;
	for(i=0;i<10;i++)
	{	printf("Please enter grades of student %d\n",i+1);
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);}
	average1(a);
	average2(a);
	search(a);
	variance(a);
	return 0;
}


void average1(int a[][5])
{
	int b[10],m,n,sum;

	for(m=0,sum=0;m<10;m++)
	{
		for(n=0;n<5;n++)
		{
			sum=sum+a[m][n];

		}
		b[m]=sum/5;
	}
	for(m=0;m<10;m++)
	{
		printf("Average of student %d is %d\n",m+1,b[m]);
	}
	
}

void average2(int a[][5])
{
	int c[5],m,n,sum;
	for(m=0,sum=0;m<5;m++)
	{
		for(n=0;n<10;n++)
		{
			sum=sum+a[n][m];

		}
		c[m]=sum/10;
	}
	for(n=0;n<5;n++)
	{
		printf("Average of subject %d is %d\n",n+1,c[n]);
	}
	
}

void search(int a[][5])
{
	int m,n,p,q,max=a[0][0];
	for(m=0;m<10;m++)
	{for(n=0;n<5;n++)
		{
			if(a[m][n]>max) 
			{max=a[m][n];p=m+1;q=n+1;}
		}
	}
	printf("The subject%d of student%d is the highest:%d\n",q,p,max);
	
}

void variance(int a[][5])
{
	int m,n,b[10],sum;
	float v,t=0,d=0;
	for(m=0,sum=0;m<10;m++)
	{
		for(n=0;n<5;n++)
		{
			sum=sum+a[m][n];

		}
		b[m]=sum/5;
	}
	for(m=0,v=0;m<10;m++)
	{
		d=d+(b[m])*(b[m]);
		t=t+b[m];
	}
	v=d/10-(t/10)*(t/10);
	printf("The variance is %f\n",v);
	
	

}
