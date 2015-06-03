#include<stdio.h>
void input(float(grade[10][5]))
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
			scanf("%f",&grade[i][j]);
	}
	printf("\n");
}


void average_student(float(grade[10][5]))
{
	float ave[10],sum;
	int i,j;
	for(i=0;i<10;i++)
	{
		sum=0;
		for(j=0;j<5;j++)
		{
			sum=sum+grade[i][j];
		}
		ave[i]=sum/5;
	}
	printf("每名学生的平均分分别为：\n");
	for(i=0;i<10;i++)
		printf("%.2f ",ave[i]);
	printf("\n");
}

void average_classes(float(grade[10][5]))
{
	float ave[5],sum;
	int i,j;
	for(j=0;j<5;j++)
	{
		sum=0;
		for(i=0;i<10;i++)
		{
			sum=sum+grade[i][j];
		}
		ave[j]=sum/5;
	}
	printf("每门课程的平均分分别为：\n");
	for(i=0;i<5;i++)
		printf("%.2f ",ave[i]);
	printf("\n");
}

void search_max(float(grade[10][5]))
{
	int i,j,r=1,l=1;
	float max=grade[0][0];
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			if(grade[i][j]>max)
			{
				max=grade[i][j];
				r=i+1;
				l=j+1;
			}
		}
	}
	printf("50个分数中最高的分数是%.2f\n",max);
	printf("它对应了第%d名学生和第%d门课程\n",r,l);
}

void s(float(grade[10][5]))
{
	int i,j;
	float sum=0,sum2=0,ave[10],t,s;
	for(i=0;i<10;i++)
	{
		t=0;
		for(j=0;j<5;j++)
		{
			t=t+grade[i][j];
		}
		ave[i]=t/5;
	}
	for(i=0;i<10;i++)
	{
		sum2=sum2+ave[i]*ave[i]/10;
		sum=sum+ave[i];
	}
	s=sum2-sum*sum/100;
	printf("平均分方差为：%.2f\n",s);
}
void main()
{
	float grade[10][5];
	input(grade);
        average_student(grade);
        average_classes(grade);
        search_max(grade);
        s(grade);
}
