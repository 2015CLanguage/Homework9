#include<stdio.h>

double aver_stu(int *a);
double aver_course(int (*a)[5],int j);
void find_max(int a[][5]);
double var(double *a);

void main()
{
	int i,j;
	double aver[10];
	int a[11][5];
	/*********************调试用*************************
	int a[10][5]={{1,1,1,1,1},{2,2,2,2,2},
	{3,3,3,3,3},{4,4,4,4,4},{5,5,5,5,5},{6,6,6,6,6},
	{7,7,7,7,7},{8,8,8,8,8},{9,9,9,9,9},{10,10,10,10,11}};
	****************************************************/
	
	for(i=0;i<10;i++)
	{
		printf("Please input Student%d's grades.\n",i+1);
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	
	printf("The average grade of each student is:\n");
	for(i=0;i<10;i++)
	{
		aver[i]=aver_stu(a[i]);
		printf("Student%2d: %.2lf.\n",i+1,aver[i]);
	}
		
	printf("\nThe average grade of each course is:\n");
	for(j=0;j<5;j++)
		printf("Course%d: %.2lf.\n",j+1,aver_course(a,j));

	find_max(a);
	printf("\nStudent%d got the highest score %d in Course%d.\n",a[10][0]+1,a[a[10][0]][a[10][1]],a[10][1]+1);

	printf("\nThe variance of the average grades is %.2lf\n",var(aver));
}

double aver_stu(int *a)
{
	int s=0,*p;
	for(p=a;p<a+5;p++)
		s+=*p;
	return s/5.0;
}

double aver_course(int (*a)[5],int j)
{
	int s=0,i;
	for(i=0;i<10;i++)
		s+=*(*(a+i)+j);
	return s/10.0;
}

void find_max(int a[][5])
{
	a[10][0]=0;	
	a[10][1]=0;

	int i,j,max;

	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			if(*(*(a+i)+j)>max)
			{
				max=*(*(a+i)+j);
				a[10][0]=i;	
				a[10][1]=j;
			}
		}
	}
}

double var(double *a)
{
	double s1=0,s2=0,*p;
	for(p=a;p<a+10;p++)
	{
		s1+=*p**p;
		s2+=*p;
	}
	return s1/10.0-(s2/10.0)*(s2/10.0);
}
