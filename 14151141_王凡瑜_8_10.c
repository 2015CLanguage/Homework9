#include<stdio.h>

void pro_max(int (*a)[5]);
void pro_min(int (*a)[5]);

void main()
{
	/****************调试用***************
	int a[5][5]={{1,2,3,4,5},{2,3,4,5,6},
	{3,4,5,6,7},{4,5,6,7,8},{5,6,7,8,9}};
	int (*p)[5],*q;
	**************************************/
	
	int a[5][5],(*p)[5],*q;
	for(p=a;p<a+5;p++)
	{
		printf("Please input the elements in Line %d.\n",p-a+1);
		for(q=*p;q<*p+5;q++)
			scanf("%d",q);
	}
	printf("The matrix input just now is:\n");
	for(p=a;p<a+5;p++)
	{
		for(q=*p;q<*p+5;q++)
			printf("%3d",*q);
		printf("\n\n");
	}
	pro_max(a);
	pro_min(a);
	printf("The matrix was turned to be:\n");
	for(p=a;p<a+5;p++)
	{
		for(q=*p;q<*p+5;q++)
			printf("%3d",*q);
		printf("\n");
	}
}

void pro_max(int (*a)[5])
{
	int max=*(*a),(*p)[5],*q,*max_addr;
	for(p=a;p<a+5;p++)
	{
		for(q=*p;q<*p+5;q++)
		{
			if(*q>max)
			{
				max=*q;
				max_addr=q;
			}
		}
	}
	*max_addr=*(*(a+2)+2);
	*(*(a+2)+2)=max;
}

void pro_min(int (*a)[5])
{
	int min[4]={*(*(a+2)+2),*(*(a+2)+2),*(*(a+2)+2),*(*(a+2)+2)},
		(*p)[5],*q,*r,*min_addr[4];
	for(p=a;p<a+5;p++)
	{
		for(q=*p;q<*p+5;q++)
		{
			if(*q<*min)
			{
				for(r=min+3;r>min;r--)
					*r=*(r-1);
				*r=*q;
				*min_addr=q;
			}
			else
			{
				if(*q<*(min+1))
				{
					for(r=min+3;r>min+1;r--)
						*r=*(r-1);
					*r=*q;
					*(min_addr+1)=q;
				}
				else
				{
					if(*q<*(min+2))
					{
						*(min+3)=*(min+2);
						*(min+2)=*q;
						*(min_addr+2)=q;
					}
					else
					{
						if(*q<*(min+3))
						{
							*(min+3)=*q;
							*(min_addr+3)=q;
						}
					}
				}
			}
		}
	}
	*(*min_addr)=*(*a);
	*(*a)=*min;
	*(*(min_addr+1))=*(*a+4);
	*(*a+4)=*(min+1);
	*(*(min_addr+2))=*(*(a+4));
	*(*(a+4))=*(min+2);
	*(*(min_addr+3))=*(*(a+4)+4);
	*(*(a+4)+4)=*(min+3);
}
