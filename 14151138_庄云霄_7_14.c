#include<stdio.h>    //本代码系原创，如需转载，请注明出处，谢谢^^
int main(){
	void average(float list[10][5]);
	void pingjun(float list[10][5]);
	void max(float list[10][5]);
	void fangcha(float list[10][5]);
	int i,j;
	float list[10][5]; 
	printf("please input grades:\n");
	for(i=0;i<10;i++){
		printf("第%d个人的五门成绩分别是: ",i);
		for(j=0;j<5;j++){
			scanf("%f",&list[i][j]);
		}
	}
	average(list);
	pingjun(list);
	max(list);
	fangcha(list);
	return 0;
} 
void fangcha(float list[10][5]){
	int i,j;
	float A=0,average,B=0,c;
	for(i=0;i<10;i++){
		
		
		for(j=0,average=0;j<5;j++){
			average += (list[i][j])/5;
		}
		A +=((average)*(average));
		B +=(average/10);
	}
		c=A/10-B*B;
		printf("方差是:%5.2f",c); 
	
	
	
	
}
void max(float list[10][5]){
	int i,j,maxi,maxj[10]={0};
	maxi=0;
	for(i=0;i<10;i++){
		maxj[i]=0;		
		for(j=1;j<5;j++){			
			if(list[i][j]>list[i][maxj[i]]){
				maxj[i]=j;
			}
		}
	}
	for(i=1;i<10;i++){
		if(list[i][maxj[i]]>list[maxi][maxj[i-1]]){
			maxi=i;
		}
	}
	printf("\n得分最高奖获得者为：第%d个人",maxi+1);
	printf("\n得分最高的科目为: 第%d个科",maxj[maxi]+1);
	printf("\n得分最高分为：%f",list[maxi][maxj[maxi]]);
}

void average(float list[10][5]){
	int i,j;
	float sum;
	for(i=0;i<10;i++){
		sum=0;
		for(j=0;j<5;j++){
			sum += list[i][j];
		}

		printf("第%d个人的平均分是: %5.2f\n",i+1,sum/5);
	}
	
	
}
void pingjun(float list[10][5]){
	int i,j;
	float sum;
	for(i=0;i<5;i++){
		sum=0;
		for(j=0;j<10;j++){
			sum += list[j][i];
		}
		printf("第%d门课的平均分是： %5.2f\n",i+1,sum/10);
	}
}
