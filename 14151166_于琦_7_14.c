#include<stdio.h>
void average1(float a[][5], float b[10]){
    float m;
	int i,j;
	for(i=0;i<10;i++){
		m=0;
		for(j=0;j<5;j++){
		    m=m+a[i][j];
		}
		b[i]=m/5;
	}
	for(i=0;i<10;i++){
	    printf("第%d名学生的平均分为%.2f\n",i+1,b[i]);
	}
} 
void average2(float a[][5]){
    float b[5],m;
	int i,j;
	for(i=0;i<5;i++){
		m=0;
		for(j=0;j<10;j++){
		    m=m+a[j][i];
		}
		b[i]=m/10;
	}
	for(i=0;i<5;i++){
	    printf("第%d门课的平均分为%.2f\n",i+1,b[i]);
	}
}
void max(float a[][5]){
    int i,j,m,n;
	float r=a[0][0];
	for(i=0;i<10;i++){
		for(j=0;j<5;j++){
			if(a[i][j]>r){
			    r=a[i][j];
				m=i+1;
				n=j+1;
			}
		}
	}
	printf("最高分数为%.2f\n",r);
	printf("最高分所对应的学生为学生%d\n",m);
	printf("最高分所对应的科目是科目%d\n",n);
}
void fangcha(float b[10]){
    float m=0,n=0,p;
	int i;
	for(i=0;i<10;i++){
	    m=m+b[i]*b[i];
		n=n+b[i];
	}
	p=1.0*m/10-(n/10)*(n/10);
	printf("方差为%.2f\n",p);
}
void main()
{
    float a[10][5], b[10];
	int i,j;
	for(i=0;i<10;i++){
	    printf("请输入第%d名学生的成绩",i+1);
		for(j=0;j<5;j++){
		    scanf("%f",&a[i][j]);
		}
	}
	average1(a,b);
	average2(a);
	max(a);
	fangcha(b);
}
