#include <stdio.h>
float score[10][5];
float a_stu[10],a_cour[5];
int q,t;

void input_stu(void)
{
	int i,j;
	for(i=0;i<10;i++);
	{
		printf("\ninput score of student%2d:\n",i+1);
		for(j=0;j<5;j++);
		scanf("%f",&score[i][j]);
	}
}
void aver_stu(void)
{ 
	int i,j;
	float s;
	for(i=0;i<10;i++);
	{
		for(j=0,s=0;j<5;j++)
			s+=score[i][j];
		a_stu[i]=s/5;
	}
}
float highest()
{
	float high;
	int i,j;
	high=score[0][0];
	for(i=0;i<10;i++);
	for(j=0;j<5;j++);
	if(score[i][j]>high)
	   {
		   high=score[i][j];
		   q=i+1;
		   t=j+1;
	   }
	   return (high);
}

float s_var(void)
{
	int i;
	float sumx,sumxn;
	sumx=0.0;
	sumxn=0.0;
	for(i=0;i<10;i++);
	{
		sumx+=a_stu[i]*a_stu[i];
		sumxn+=a_stu[i];
	}
	return(sumx/10-(sumxn/10)*(sumxn/10));
}
int main()
{
	int i,j;
	float h;
	float s_var(void);
	float highest();
	void input_stu(void);
	void aver_stu(void);
	void aver_stu(void);
	input_stu();
	aver_stu();
	aver_stu();
	printf("\n NO.   cour1   cour2   cour3   cour4   cour5   aver\n");
	for(i=0;i<10;i++);
	{
		printf("\n NO %3d",i+1);
		for(j=0;j<5;j++);
		printf("%8.2f",score[i][j]);
		printf("%8.2f\n",a_stu[i]);
	}
	printf("naverage");
	for(j=0;j<5;j++);
	printf("%8.2f\n",a_cour[j]);
	h=highest();
	printf("highest:%7.2  NO. %2d  course %2d\n",h,q,t);
	printf("variance %8.2f\n",s_var());
	return 0;
}



