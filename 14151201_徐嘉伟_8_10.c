#include <stdio.h>
int main()
{
	void change(int *p);
	int a[5][5],i,j,*p;
	printf("请输入数组:\n");
	for(i=0;i<5;i++)
	    for(j=0;j<5;j++)
	        scanf("%d",&a[i][j]);
	p=&a[0][0];
	change(p);
	printf("改变后的数组为:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
return 0;}

void change(int *p)
{
	int i,j,t;
	int *pmax,*pmin;
	pmax=p;
	pmin=p;
	for(i=0;i<5;i++)
	    for(j=0;j<5;j++){
	    	if(*pmax<*(p+5*i+j))
	    	pmax=p+5*i+j;
	    	if(*pmin>*(p+5*i+j))
	    	pmin=p+5*i+j;
		}
	t=*(p+12);*(p+12)=*pmax;*pmax=t;
	t=*p;*p=*pmin;*pmin=t;
	pmin=p+1;
	for(i=0;i<5;i++)
	    for(j=0;j<5;j++)
	        if(((p+5*i+j)!=p)&&(*pmin>*(p+5*i+j)))
	        pmin=p+5*i+j;
	t=*pmin;*pmin=*(p+4);*(p+4)=t;
	pmin=p+1;
	for(i=0;i<5;i++)
	    for(j=0;j<5;j++)
	        if(((p+5*i+j)!=p)&&((p+5*i+j)!=(p+4))&&(*pmin>*(p+5*i+j)))
	        pmin=p+5*i+j;
	t=*pmin;*pmin=*(p+20);*(p+20)=t;
	pmin=p+1;
	for(i=0;i<5;i++)
	    for(j=0;j<5;j++)
	        if(((p+5*i+j)!=p)&&((p+5*i+j)!=(p+4))&&((p+5*i+j)!=(p+20))&&(*pmin>*(p+5*i+j)))
	        pmin=p+5*i+j;
	        t=*pmin;*pmin=*(p+24);*(p+24)=t;
}
