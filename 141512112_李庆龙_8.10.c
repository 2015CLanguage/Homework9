# include<stdio.h>
void rec(int *p);
void order(int *p);
int main()
{
	int list[25];
	int i = 0;
	int *p = list;
	printf("ÊäÈë¾ØÕóÖÐµÄÊý");
	for (i; i < 25; i++)
	{
	scanf_s("%d", &list[i]);
	}
	order(p);
	rec(p);
	system("pause");
}
void rec(int *p)
{
	int list[5][5];
	int i, j;
	list[0][0] = *(p);
	list[0][4] = *(p + 1);
	list[2][2] = *(p + 24);
	list[4][0] = *(p + 2);
	list[4][4] = *(p + 3);
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{			
			if ((i == 0 && (j != 0 && j != 4)))
			{
				list[i][j] = *(p + 5 * i + j + 3);
			}
			else
			{
				if (i ==1)
					list[i][j] = *(p + 5 * i + j + 2);
				if (i == 2)
				{
					if (j == 2)
						continue;
					else
					{
						if (j < 2)
							list[i][j] = *(p + 5 * i + j + 2);
						else
							list[i][j] = *(p + 5 * i + j + 1);
					}
				}
				if (i == 3)
				{
					list[i][j] = *(p + 5 * i + j + 1);
				}
				if (i == 4)
				{
					if (j == 0 || j == 4)
						continue;
					else
						list[i][j] = *(p + 5 * i + j);
				}
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%3d", list[i][j]);
		}
		printf("\n");
	}
}
void order(int *p)
{
	int i, j, m;
	for (i = 0; i < 25; i++)
	{
		for (j = 0; j < 24 - i; j++)
		{
			if (*(p + j)>*(p + j + 1))
			{
				m = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = m;
			}
		}
	}
}
