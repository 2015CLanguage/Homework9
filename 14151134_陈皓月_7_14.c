#include<stdio.h>
float everyaverage(int i,float a[][5]);
float classaverage(int i,float a[][5]);
void max(float a[][5]);
float saverage(float a[][5]);
void main()
{
	int i,j;
	float a[10][5]={{98,96,65,84,100},{69,85,76,84,95},{98,65,63,72,56},{96,98,85,86,63},{85,63,64,82,75},
	{85,96,63,74,85},{96,85,73,51,96},{85,85,72,96,85},{85,94,71,63,52},{85,65,84,74,32}};
	printf("共计十名学生，编号1~10；五门课程，编号1~5\n");
	printf("请输入所要查询的学生编号\n");
	scanf("%d",&i);
	printf("该学生平均分为%.2f\n",everyaverage(i-1,a));
	printf("请输入所要查询课程编号\n");
	scanf("%d",&j);
	printf("该课程平均分为%.2f\n",classaverage(i-1,a));
	printf("最高分统计\n");
	max(a);
	printf("成绩方差为%.2f\n",saverage(a));
}
float everyaverage(int i,float a[][5])
{
	int j;
	float m,n;
	n=0;
	for(j=0;j<5;j++)
		n=n+a[i][j];
	m=n/5;
	return m;
}
float classaverage(int i,float a[][5])
{
	int j;
	float n,m;
	n=0;
	for(j=0;j<10;j++)
		n=n+a[j][i];
	m=n/10;
	return m;
}
void max(float a[][5])
{
	float max;
	int m,n,i,j;
	max=a[0][0];
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				n=i;
				m=j;
			}
		}
	}
	printf("最高分为%.2f,为第%d名学生，第%d门课\n",max,n+1,m+1);
}
float saverage(float a[][5])
{
	float x,y,m,s;
	int i;
	x=0;
	for(i=0;i<10;i++)
		x=x+everyaverage(i,a);
	m=0;
	for(i=0;i<10;i++)
	{
		y=everyaverage(i,a)*everyaverage(i,a);
		m=m+y;
	}
	s=m/10-x*x/100;
	return s;
}
