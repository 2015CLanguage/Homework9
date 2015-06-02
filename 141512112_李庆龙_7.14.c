# include<stdio.h>
# define N 10
float *add(int(*p)[5],float *q);
void aver(int(*p)[5]);
void max(int(*)[5]);
void s(int(*)[5],float *q);
int main()
{
	int i, j;
	int list[N][5];
	int(*p)[5] = list;
	float av[N];
	float *q = av;
	printf("input all the students' mark:\n");
	for (i = 0; i < N; i++)
	{
		pirntf("µÚ%d¸öÑ§ÉúµÄ³É¼¨·Ö±ðÎª£º\n");
		for (j = 0; j < 5; j++)
		{
			scanf_s("%d", &list[i][j]);
		}
	}
	printf("\n");
	q=add(p,q);
	max(p);
	aver(p);
	s(p,q);
	printf("\n");
	system("pause");
}
float *add(int(*p)[5],float *q)
{
	int i;
	float s;
	for (i = 0; i <N; i++)
	{
		s = **(p + i) + *(*(p + i) + 1) + *(*(p + i) + 2) + *(*(p + i) + 3) + *(*(p + i) + 4);
		printf("µÚ%d¸öÑ§ÉúµÄ³É¼¨Æ½¾ù·ÖÎª£º%.2f\n",i+1, s/5);
		*(q + i) = s / 5;
	}
	return q;
}
void aver(int(*p)[5])
{
	int i, j;
	float s=0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < N; j++)
		{
			s =s+ *(*(p+j) + i);
		}
		printf("µÚ%dÃÅ¿Î³ÌµÄÆ½¾ù³É¼¨Îª£º%.2f\n", i + 1, s / N);
		s = 0;
	}
}
void max(int(*p)[5])
{
	int max, i, j, list[2] = { 1, 1 };
	max = **p;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(*(p + i) + j)>max)
			{
				max = *(*(p + i) + j);
				list[0] = i; list[1] = j;
			}
		}
	}
	printf("×î¸ß·ÖÊý¶ÔÓ¦Ñ§ÉúÎªµÚ%d¸ö¡£\n", list[0]+1);
	printf("×î¸ß·ÖÊý¶ÔÓ¦¿Î³ÌÎªµÚ%dÃÅ¡£\n", list[1]+1);
}
void s(int(*p)[5],float *q)
{
	int i;
	float s=0;
	for (i = 0; i < N; i++)
	{
		s = s + (*(q + i))*(*(q + i)) / N - (*(q + i))*(*(q + i)) / (N*N);
	}
	printf("Ñ§Éú³É¼¨µÄÆ½¾ù·Ö·½²îÎª£º%.3f", s);
}
