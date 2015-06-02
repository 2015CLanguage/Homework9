#include <stdio.h> 
int main(){
void change(int *p);
int a[5][5],i,j;
int *p;
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		scanf("%d",&a[i][j]);
	}
}
p=&a[0][0];
change(p);
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		printf("%d\t",a[i][j]);
	}
	printf("\n");
}
return 0;
}

void change(int *p){
	int temp,i,j;
	int *pmax,*pmin;
	pmax=p;
	pmin=p;
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
	if(*(p+i*5+j)>*pmax)pmax=p+5*i+j;
	if(*(p+i*5+j)<*pmin)pmin=p+5*i+j;	
	}
}
temp=*(p+12);
*(p+12)=*pmax;
*pmax=temp;
temp=*p;
*p=*pmin;
*pmin=temp;
pmin=p+1;
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		if(*(p+i*5+j)!=*p&&*(p+i*5+j)<*pmin){
			pmin=(p+i*5+j);
		}
	}
}
temp=*pmin;
*pmin=*(p+4);
*(p+4)=temp;

for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		if((p+i*5+j)!=p&&*(p+i*5+j)<*pmin&&(p+i*5+j)!=(p+4)){
			pmin=(p+i*5+j);
		}
	}
}
temp=*(p+20);
*(p+20)=*pmin;
*pmin=temp;
pmin=p+1;
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		if((p+i*5+j)!=p&&*(p+i*5+j)<*pmin&&(p+i*5+j)!=(p+4)&&(p+i*5+j)!=(p+20)){
			pmin=(p+i*5+j);
		}
	}
}
temp=*(p+24);
*(p+24)=*pmin;
*pmin=temp;
}
