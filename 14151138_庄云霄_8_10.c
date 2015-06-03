#include<stdio.h>  //原创代码，抄袭必究
void change(int *p);   //首先考虑用定义一个形参是指针的函数
int main()
{
	int a[5][5],*p,i,j;

	for(i=0;i<5;i++)
	{	printf("please input %d array:",i);      //分行输入
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	p=&a[0][0];
	change(p);
	printf("now they are:\n");                       //分行输出
	for(i=0;i<5;i++)
	{
		printf("\n");
		for(p=&a[i][0];p<&a[i][0]+5;p++)
			printf("%d ",*p);

	}
	return 0;
}
void change(int *p){
	int *maxp,*minp,i,j;
	int temp;
	maxp=minp=p;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(*maxp<*(p+5*i+j)){                  //找出最大数的地址
				maxp=p+5*i+j;
			}
			
		}
		
	}
	temp=*(p+12);
	*(p+12)=*maxp;                  //将最大数与中间的数互换
	*maxp=temp;

	for(i=0,minp=p;i<5;i++){
		for(j=0;j<5;j++){
			if(*minp>*(p+5*i+j)){
				minp=p+5*i+j;                     //找出最小的数，依次与最小的四个数所在的位置互换
			}
		}
	}
	temp=*(p+0);
	*(p+0)=*minp;
	*minp=temp;

	for(i=0,minp=p+1;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0&&j==0)continue;  //嗯嗯，这个地方比答案提供的方法更易于理解，使之前找出的最小数对后来的排序不构成影响
			if(*minp>*(p+5*i+j))
				minp=p+5*i+j;
			}
	}
	
	temp=*minp;
	*minp=*(p+4);
	*(p+4)=temp;

	
	for(i=0,minp=p+1;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0&&j==0)continue;
			if(i==0&&j==4)continue;
			if(*minp>*(p+5*i+j)){
				minp=p+5*i+j;
			}
		}
	}
	temp=*(p+24);
	*(p+24)=*minp;
	*minp=temp;	
	
	for(i=0,minp=p+1;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0&&j==0)continue;
			if(i==0&&j==4)continue;
			if(i==4&&j==4)continue;			
			if(*minp>*(p+5*i+j)){
				minp=p+5*i+j;
			}
		}
	}
	temp=*(p+20);
	*(p+20)=*minp;
	*minp=temp;	
	
}


