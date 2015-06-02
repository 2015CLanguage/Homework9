#include<stdio.h>
void aver_stu(float a[10][5]);
void aver_cou(float a[10][5]);
float highest(float a[10][5]);
float s(float a[10][5]);
float stu[10],cou[5];
int r,c;
int main()
{float score[10][5],h;
int i,j;
printf("输入10 个学生的五门课程成绩\n");
for(i=0;i<10;i++){
	for(j=0;j<5;j++)
		scanf("%f",&score[i][j]);
}
aver_stu(score);
aver_cou(score);
printf("十个学生的平均成绩是:\n");
for(i=0;i<10;i++){
	printf("%8.2f",stu[i]);
}
printf("\n");
printf("五门课的平均成绩是：\n");
for(j=0;j<5;j++){
	printf("%8.2f",cou[j]);
}
printf("\n");
h=highest(score);
printf("highest:%7.2f,NO.%2d,course %2d\n",h,r,c);
printf("方差:%8.2f",s(score));
return 0;
}
void aver_stu(float a[10][5])
{
	int i,j;
	float sum;
	for(i=0;i<10;i++){
		for(j=0,sum=0;j<5;j++)
			sum=sum+a[i][j];
		stu[i]=(sum/5.0);
		
	}

}
void aver_cou(float a[10][5])
{
	int i,j;
	float sum;
	for(j=0;j<5;j++){
		for(i=0,sum=0;i<10;i++)
			sum=sum+a[i][j];
		cou[j]=(sum/10.0);
	}
}
float highest(float a[10][5])
{
	int i,j;
	float high;
	high=a[0][0];
	for(i=0;i<10;i++){
		for(j=0;j<5;j++){
			if(a[i][j]>high){
				high=a[i][j];
				r=i+1;
                c=j+1;
			}
			

		}
	}
	return (high);
}
float s(float a[10][5])
{
	int i;
	float sum1=0.0,sum2=0.0;
	for(i=0;i<10;i++){
		sum1=sum1+stu[i]*stu[i];
		sum2=sum2+stu[i];
	}
	return(sum1/10-(sum2/10)*(sum2/10));
}
