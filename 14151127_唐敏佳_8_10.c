#include "stdio.h"

int main()
{
	void transform(int *s);
	int t[5][5];
	int i,j,*s;

	//输入数组
	printf("请输入一个5*5的矩阵：\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&t[i][j]);
		}
	}
	s=&t[0][0];

	//调用函数
	transform(s);

	//输出处理后数组
	printf("处理后的数组为：\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%5d",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}


void transform(int *s)
{
    int *max,*min,t,i,j;
    min=s;
    max=s;

    //找出最大值与最小值
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(*(s+i*5+j)>*max)
            {
                max=s+i*5+j;
            }
            if(*(s+i*5+j)<*min)
            {
                min=s+i*5+j;
            }
        }
    }

    //将最大值与中心元素互换
    t=*max;
    *max=*(s+12);
    *(s+12)=t;

    //将最小值与左上角元素互换
    t=*min;
    *min=*s;
    *s=t;
    min=s+1;

    //找出第二小的元素并与右上角元素互换
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if((s+i*5+j)!=s && *min>*(s+i*5+j))
            {
                min=s+i*5+j;
            }
        }
    }

    t=*min;
    *min=*(s+4);
    *(s+4)=t;

    //找出第三小的元素并与左下角元素互换
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if((s+i*5+j)!=s && (s+i*5+j)!=s+4 &&*min>*(s+i*5+j))
            {
                min=s+i*5+j;
            }
        }
    }

    t=*min;
    *min=*(s+20);
    *(s+20)=t;

    //找出第四小的元素并与右下角元素互换
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if((s+i*5+j)!=s && (s+i*5+j)!=s+4 && (s+i*5+j)!=s+20 && *min>*(s+i*5+j))
            {
                min=s+i*5+j;
            }
        }
    }

    t=*min;
    *min=*(s+24);
    *(s+24)=t;
}
