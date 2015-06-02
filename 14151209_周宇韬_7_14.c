# include <stdio.h>
# define N 10
# define M 5
void aver_stu(float score[N][M]);
void aver_sub(float score[N][M]);
void loca(float score[N][M]);
void s(float score[N][M]);

int main()
{
    float score[N][M];
    int i,j;
    printf("请输入每个学生的成绩:");
    for (i=0; i<N; i++)
    {
        for (j=0; j<M; j++)
        {
            scanf("%f",&score[i][j]);
        }
    }
    
    aver_stu(score);
    aver_sub(score);
    loca(score);
    s(score);
}

void aver_stu(float score[N][M])
{
    int i,j,k;
    float aver[N];
    for (i=0; i<N; i++)
    {
        int s=0;
        for (j=0; j<M; j++)
        {
            s=s+score[i][j];
        }
        aver[i]=s/M;
    }
    for (k=0; k<N; k++)
    {
        printf("第%d位同学的平均分为:%f\n",k+1,aver[k]);
    }
}


void aver_sub(float score[N][M])
{
    float aver[M];
    int i,j,k;
    for (i=0; i<M; i++)
    {
        int s=0;
        for (j=0; j<N; j++)
        {
            s=s+score[j][i];
        }
        aver[i]=s/N;
    }
    for (k=0; k<M; k++)
    {
        printf("第%d科平均分为:%f\n",k+1,aver[k]);
    }
}


void loca(float score[N][M])
{
    int i,j,loca1=0,loca2=0;
    float max=score[0][0];
    for (i=0; i<N; i++)
    {
        for (j=0; j<M; j++)
        {
            if (max<score[i][j])
            {
                max=score[i][j];
                loca1=i+1;
                loca2=j+1;
            }
        }
    }
    printf("最高分为%f,是第%d位同学的第%d科\n",max,loca1,loca2);
}


void s(float score[N][M])
{
    int i,j,k,m;
    float aver[N];
    float a=0,b=0,c=0;
    for (i=0; i<N; i++)
    {
        float s=0;
        for (j=0; j<M; j++)
        {
            s=s+score[i][j];
        }
        aver[i]=s/M;
    }
    for (k=0; k<N; k++)
    {
        a=a+aver[k]*aver[k];
    }
    for (m=0; m<N; m++)
    {
        b=b+aver[m];
    }
    c=a/N-(b/N)*(b/N);
    printf("平均分方差是%f\n",c);
}
