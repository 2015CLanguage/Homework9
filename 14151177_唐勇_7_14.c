#include<stdio.h> 
#include<windows.h> 
main() 
{ 
int i,j,li=0,lj=0; 
float score[10][5],average[10],a1,a2,a3,a4,a5,largest=0,fc=0,a=0;  
printf("请输入10个学生的成绩,按照五门课程的顺序依次输入：\n"); 
for(i=0;i!=10;++i) 
{ 
printf("第%d个学生：\n",i+1); 
for(j=0;j!=5;++j) 
{ 
scanf("%f",&score[i][j]); 
if(largest<score[i][j]) 
{ 
largest=score[i][j]; 
li=i+1; 
lj=j+1; 
} 
a=a+score[i][j]; 
} 
average[i]=(score[i][0]+score[i][1]+score[i][2]+score[i][3]+score[i][4])/5; 
a1=a1+score[i][0]; 
a2=a2+score[i][1]; 
a3=a3+score[i][2]; 
a4=a4+score[i][3]; 
a5=a5+score[i][4]; 
} 
a=a/50; 
for(i=0;i!=10;++i) 
{ 
for(j=0;j!=5;++j) 
{ 
fc=fc+(score[i][j]-a)*(score[i][j]-a); 
} 

} 
fc=fc/50; 
a1=a1/10; 
a2=a2/10; 
a3=a3/10; 
a4=a4/10; 
a5=a5/10; 
printf("50个学生的成绩如下：\n"); 
printf("学生编号 课程1 课程2 课程3 课程4 课程5\n"); 
for(i=0;i!=10;++i) 
{ 
printf("%8d ",i); 
for(j=0;j!=5;++j) 
{ 
printf("%2.2f ",score[i][j]); 
} 
printf("\n"); 
} 
for(i=0;i!=10;++i) 
printf("第%d个学生的平均分为：%.2f\n",i+1,average[i]); 
printf("第1门课的平均分为：%.2f\n",a1); 
printf("第2门课的平均分为：%.2f\n",a2); 
printf("第3门课的平均分为：%.2f\n",a3); 
printf("第4门课的平均分为：%.2f\n",a4); 
printf("第5门课的平均分为：%.2f\n",a5); 
printf("50个分数中最高的分数是第%d个学生的第%d门课，分数为：%.2f\n",li,lj,largest); 
printf("平均分方差为：%.2f\n",fc); 
system("pause"); 
}
