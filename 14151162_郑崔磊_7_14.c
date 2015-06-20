#include<stdio.h>
void student_average(float (*p)[5]);
void subject_average(float (*p)[5]);
void the_best(float (*p)[5]);
void student_variance(float (*p)[5]);
int main()
{
    float student_subject[10][5];
    int i,j;
    printf("please input your grades:");
    for(i=0;i<10;i++)
        {for(j=0;j<5;j++)
            scanf("%f",&student_subject[i][j]);
         printf("\n");
        }
    student_average(student_subject);
    subject_average(student_subject);
    the_best(student_subject);
    student_variance(student_subject);
    return 0;
}
void student_average(float (*p)[5])
{
    float x[10],sum=0;
    int i,j;
    for(i=0;i<10;i++)
    {   for(j=0;j<5;j++)
            {sum=sum+*(*(p+i)+j);}
        x[i]=sum/5;
        sum=0;
        printf("the %dth student's average grade is:x[%d]=%f\n",i+1,i+1,x[i]);
    }
}
void subject_average(float (*p)[5])
{
    float x[5],sum=0;
    int i,j;
    for(j=0;j<5;j++)
    {   for(i=0;i<10;i++)
            {sum=sum+*(*(p+i)+j);}
        x[j]=sum/10;
        sum=0;
        printf("the %dth subject's average grade is:x1[%d]=%f\n",j+1,j+1,x[j]);
    }
}
void the_best(float (*p)[5])
{
    int m=0,n=0,i,j;
    for(i=0;i<10;i++)
        for(j=0;j<5;j++)
        {
            if(*(*(p+i)+j)>*(*(p+m)+n))
             {m=i;n=j;}
        }
    printf("the best grade is from the %dth student,the %dth subject",m+1,n+1);
    printf("\n");
}
void student_variance(float (*p)[5])
{
    float x[10],sum=0,sum1=0,sum2=0,variance;
    int i,j;
    for(i=0;i<10;i++)
    {   for(j=0;j<5;j++)
            {sum=sum+*(*(p+i)+j);}
        x[i]=sum/5;
        sum=0;
        sum1=sum1+x[i]*x[i];
        sum2=sum2+x[i];
    }
    variance=sum1/10-(sum2/10)*(sum2/10);
    printf("the variance of average grade is %f",variance);
}
