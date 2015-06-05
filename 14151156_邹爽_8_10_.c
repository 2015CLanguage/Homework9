#include<stdio.h>
int main()
{
	void change(int *p);
	int a[5][5],i,j,*p;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	scanf("%d",&a[i][j]);
	p=&a[0][0];
	change(p);
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	printf("%d ",a[i][j]);
	return 0;	
}

void change(int *p)
{
	int i,j,k,m=5;
	int *pmax,*pmin;
	pmax=p;
	pmin=p;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	{
		if(*pmax<*(p+(i*m+j)))
		  pmax=p+(i*m+j);
		if(*pmin>*(p+(i*m+j)))
		  pmin=p+(i*m+j);
	}
	k=*(p+12);       //最大换到中间 
	*(p+12)=*pmax;
	*pmax=k;
	k=*p;            //最小换到第一个 
	*p=*pmin;
	*pmin=k;
	pmin=p+1;       //排除掉第一小的数
	for(i=0;i<5;i++)    //找第二小的数 
	for(j=0;j<5;j++)
	if((p+(i*m+j)!=p)&&(*pmin>*(p+(i*m+j))))
	   pmin=p+(i*m+j);
	k=*pmin;
	*pmin=*(p+4);
	*(p+4)=k;
	*pmin=k;
	pmin=p+2;       //排除掉第二小的数
	for(i=0;i<5;i++)    //找第二小的数 
	for(j=0;j<5;j++)
	if((p+(i*m+j)!=p)&&(p+(i*m+j)!=(p+4))&&(*pmin>*(p+(i*m+j))))
	   pmin=p+(i*m+j);
	k=*pmin;
	*pmin=*(p+20);
	*(p+20)=k;
	*pmin=k;
	pmin=p+3;       //排除掉第三小的数
	for(i=0;i<5;i++)    //找第二小的数 
	for(j=0;j<5;j++)
	if((p+(i*m+j)!=p)&&(p+(i*m+j)!=(p+4))&&(p+(i*m+j)!=(p+20))&&(*pmin>*(p+(i*m+j))))
	   pmin=p+(i*m+j);
	k=*pmin;
	*pmin=*(p+24);
	*(p+24)=k;
	
}
