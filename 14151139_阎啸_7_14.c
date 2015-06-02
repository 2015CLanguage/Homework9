#include<stdio.h>
float a[10][5];
float b[10],c[5];                //b用来存放每个学生的平均分，c用来存放每门课程的平均分
int d,e;                         //d,e分别为50个分数中最高分对应的学生号和课程号

int main()
{int i,j;
 float h;
 void input_stu(void);
 void aver_stu(void);
 void aver_cour(void);
 float highest();
 float s_var(void);
 input_stu();
 aver_stu();
 aver_cour();
 printf("\n  NO.    cour1    cour2    cour3    cour4    cour5    aver\n");
 for(i=0;i<10;i++)
  {printf("\n NO %2d",i+1);
   for(j=0;j<5;j++)
   printf("%8.2f",a[i][j]);
   printf("%8.2f\n",b[i]);
  }
 printf("\naverage:");
 for(j=0;j<5;j++)
   printf("%8.2f",c[j]);
 printf("\n");
 h=highest();
 printf("highest:%7.2f    NO. %2d    course %2d\n",h,d,e);
 printf("variance%8.2f\n",s_var());
 return 0;
}
void input_stu(void)             //输入学生成绩的函数
{int i,j;
 for(i=0;i<10;i++)
 {printf("input score of student%2d:\n",i+1);
  for(j=0;j<5;j++)
	  scanf("%f",a[i][j]);
 }
}

void aver_stu(void)              //计算每个学生平均分的函数
{int i,j;
 float s;
 for(i=0;i<10;i++)
 {for(j=0,s=0;j<5;j++)
	  s+=a[i][j];
      b[i]=s/5;
 }
}

void aver_cour(void)             //计算每门课程平均分的函数
{int i,j;
 float s;
 for(j=0;j<5;j++)
 {for(i=0,s=0;i<10;i++)
      s+=a[i][j];
	  c[j]=s/10;
 }
}

float highest()                  //求最高分和其对应的学生号d，课程号e
{float high;
 int i,j;
 high=a[0][0];
 for(i=0;i<10;i++)
	for(j=0;j<5;j++)
		if(a[i][j]>high)
		{high=a[i][j];
		 d=i+1;
		 e=j+1;
		}
 return (high);
}

float s_var(void)               //求方差的函数
{int i;
 float m,n;
 m=0.0;
 n=0.0;
 for(i=0;i<10;i++)
 {m+=b[i]*b[i];
  n+=b[i];
 }
 return(m/10-(n/10)*(n/10));
}
