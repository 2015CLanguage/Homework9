#include<stdio.h>
void f(float a[10][5]);
void g(float a[10][5]);
void h(float a[10][5]);
void p(float a[10][5]);
int main()
{
	int i,j;
	float a[10][5];
	printf("请依次输入10名学生的5门课程的分数");
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			scanf("%f",&a[i][j]);
	f(a);
	g(a);
	h(a);
 	p(a);
	return 0;
}
void f(float a[10][5])
{
	float b[10],c[10];
	int i,j;
	for(i=0;i<10;i++)
		b[i]=0;
    for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			b[i]=b[i]+a[i][j];
	for(i=0;i<10;i++)
		c[i]=b[i]/5;
    printf("这十名学生的平均分分别为");
	for(i=0;i<10;i++)
		printf("%4f  ",c[i]);
	printf("\n");
}
void g(float a[10][5])
{
	float d[5],e[5];
	int i,j;
	for(j=0;j<5;j++)
		d[j]=0;
    for(j=0;j<5;j++)
		for(i=0;i<10;i++)
            d[j]=d[j]+a[i][j];
    for(j=0;j<5;j++)
		e[j]=d[j]/10;
	printf("这五门课的平均成绩分别为");
	for(j=0;j<5;j++)
		printf("%4f  ",e[j]);
	printf("\n");
}
void h(float a[10][5])
{
	int i,j,x,y;
	float max;
	max=a[0][0];
    for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			if(max<a[i][j])
                max=a[i][j],x=i,y=j;
	printf("最高的成绩是第%d位同学的第%d科,为%5f分\n",i,j,max);
}
void p(float a[10][5])
{
    float b[10],c[10],q,s,t;
	int i,j;
	t=0,s=0;
	for(i=0;i<10;i++)
		b[i]=0;
    for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			b[i]=b[i]+a[i][j];
	for(i=0;i<10;i++)
		c[i]=b[i]/5,t=t+c[i],s=s+c[i]*c[i];
    q=s/5-(t/5)*(t/5);
	printf("平均分方差为%4f  \n",q);
	printf("\n");
}
