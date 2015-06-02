#include<stdio.h>
float score[11][6];
float a_stu[11];
int main(){
	void input(void);
	void avesub(void);
	void avestu(void);
	float high();
	float svar(void);
	input ();
	printf("\n");
	avestu();
	printf("\n");
	avesub();
	printf("\n");
    high();
	printf("\n");
	svar();
	printf("\n");
	return 0;	
}
void input(void){
	int i,j;
	for (i=1;i<=10;i++){
		printf("input student %d\n",i);
		for (j=1;j<=5;j++){
			scanf("%f",&score[i][j]);
		}
	}
}
void avestu(void){
    int i,j;
	float sum,result;
	for (i=1;i<=10;i++){
		sum=0.0;
        for (j=1;j<=5;j++){
			sum=sum+score[i][j];
		}
		result=sum/5.0;
		a_stu[i]=result;
		printf("average score of student %d is %.2f\n",i,result);
	}
}

void avesub(void){
    int i,j;
	float sum,result;
	for (j=1;j<=5;j++){
		sum=0.0;
        for (i=1;i<=10;i++){
			sum=sum+score[i][j];
		}
		result=sum/10.0;
		printf("average score of subject %d is %.2f\n",j,result);
	}
}

float high(){
	int i,j,k,l;
	float temp;
	temp=score[1][1];
	k=1;
	l=1;
	for (i=1;1<=10;i++){
		for (j=1;j<=5;j++){
			if (score[i][j]>temp){
			    temp=score[i][j];
			    k=i;
			    l=j;
			}
		}
	}
	printf("highest is %.2f,from student %d,subjuet %d",temp,k,l);
	return 0;
}

float svar(void){
	int i;
	float sumx,sumxn,result;
	sumx=0.0;
	sumxn=0.0;
	for (i=1;i<=10;i++){
		sumx+=a_stu[i]*a_stu[i];
		sumxn+=a_stu[i];
	}
	result=sumx/10-(sumxn/10)*(sumxn/10);
	printf("jariance is %.2f\n",result);
	return 0;
}
