# include<stdio.h>
# include<string.h>
int strcmp(char *p1, char *p2);
int main()
{
	char *p1, *p2;
	int n;
	printf("input two strings:\n");
	gets_s(p1, 50);
	gets_s(p2, 50);
	n=strcmp(p1, p2);
	printf("%d\n", n);
	system("pause");
}
int strcmp(char *p1, char *p2)
{
	int n = (strlen(p1) > strlen(p2) ? strlen(p1) : strlen(p2));
	int i,k=0;
	for (i = 0; i < n; i++)
	{
		if (*(p1 + i) != *(p2 + i))
		{
			return *(p1 + i) - *(p2 + i);
		}
		else
			k++;
	}
	if (k == n)
		return 0;
}
