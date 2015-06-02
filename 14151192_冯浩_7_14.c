#include<stdio.h>
void stav();
void sbav();
void max();
void fangcha();
float a[10][5],t[10],b[5],s2,x,y;
int j,i,c[2];

int main()
{
	printf("请依次输入10名学生的5门课的成绩:\n");
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			scanf("%f",&a[i][j]);
	stav();
	sbav();
	for(j=0;j<10;j++)
		printf("第%d个学生的平均分为:%7.2f\n",j+1,t[j]);
	for(j=0;j<5;j++)
		printf("第%d门课的平均分为:%7.2f\n",j+1,b[j]);
	max();
	printf("最高分为第%d个学生的课程%d。\n",c[0]+1,c[1]+1);
	fangcha();
	printf("平均分方差为%7.2f\n",s2);
	return 0;
}

void stav()
{
	int i,j;
	float sum;
	for(i=0;i<10;i++)
		{sum=0;
		 for(j=0;j<5;j++)
			 sum=sum+a[i][j];
		 t[i]=sum/5;
		}
}

void sbav()
{
	float sum;
	for(j=0;j<5;j++)
		{sum=0;
		 for(i=0;i<10;i++)
			 sum=sum+a[i][j];
		 b[j]=sum/10;
		}

}

void max()
{
	int x,k;
	x=k=0;
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			{if(a[i][j]>a[x][k])
				{x=i;
				 k=j;}
			}
	c[0]=x;
	c[1]=k;
}
		
void fangcha()
{
	x=y=0;
	for(i=0;i<10;i++)
		{x=x+t[i]*t[i];
		 y=y+t[i];}
	
	s2=x/10-y*y/100;
}
