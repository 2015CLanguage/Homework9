#include<stdio.h>
void aver1(int a[10][5]);
void aver2(int a[10][5]);
void sea(int a[10][5]);
void sig(int a[10][5]);
void main()
{
	int i,j;
	int s[10][5];
	printf("scores are:");
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			scanf("%d",&s[i][j]);
	aver1(s);
	printf("\n");
	aver2(s);
	printf("\n");
	sea(s);
	printf("\n");
	sig(s);
}
void aver1(int a[10][5])
{
	int av1[10],i,j,k,sum=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		    sum=sum+a[i][j];
		av1[i]=sum/5;
		sum=0;
	}
	printf("every students 平均分:");
    for(k=0;k<10;k++)printf("%d,",av1[k]);
}
void aver2(int a[10][5])
{
	int av2[5],i,j,k,su=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<10;j++)
		    su=su+a[j][i];
		av2[i]=su/10;
		su=0;
	}
	printf("every class 平均分:");
    for(k=0;k<5;k++)printf("%d,",av2[k]);
}
void sea(int a[10][5])
{
	int i,j,x,y,max=a[0][0];
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			    x=i;y=j;
			}
		}
	}
	printf("最高分为:%d学生为:%d科目为:%d",max,x,y);
}
void sig(int a[10][5])
{
	int av1[10],i,j,k,sum=0;
	float A=0,B=0,c=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		    sum=sum+a[i][j];
		av1[i]=sum/5;
		sum=0;
	}
	for(k=0;k<10;k++)
	{
		A+=av1[k]*av1[k];
		B+=av1[k]/10;
	}
	c=(A/10)-(B*B);

	printf("平均分方差为:%f",c);
}
