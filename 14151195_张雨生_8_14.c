#include<stdio.h>
void change(int *);
void main()
{int a[25]={0},i;
	printf("please input the number:");
	for(i=0;i<25;i++)
	{if(i%5==0)printf("\n");
		scanf("%d",&a[i]);
	}
    change(a);
}
void change(int *a)
{int b[25]={0},i,j,k,s,m,n,t,max=a[12],min=a[0];
	for(i=0;i<25;i++)b[i]=a[i];
    for(j=0;j<25;j++)
	{if(a[j]>max)
		{max=a[j];
			b[12]=max;
			b[j]=a[12];
		}
	}
	for(k=0;k<25;k++)
	{if(a[k]<min)
		{min=a[k];
			a[k]=max;
			b[0]=min;
			b[k]=a[0];
		}
	}
	min=a[4];
	for(s=0;s<25;s++)
	{
		if(a[s]<min)
		{min=a[s];
			a[s]=max;
			b[4]=min;
			b[s]=a[4];
		}
	}
	min=a[20];
	for(n=0;n<25;n++)
	{
		if(a[n]<min)
		{min=a[n];
			a[n]=max;
			b[20]=min;
			b[n]=a[20];
		}
	}
	min=a[24];
	for(m=0;m<25;m++)
	{if(a[m]<min)
		{min=a[m];
			a[m]=max;
			b[4]=min;
			b[m]=a[4];
		}
	}
	printf("Now:");
    for(t=0;t<25;t++)
	{if(t%5==0)printf("\n");
		printf("%d",b[t]);
	}
}
