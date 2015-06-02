# include<stdio.h>
int main()
{
	char *months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "Septemper", "October", "November", "December" };
	int n;
	printf("input the month:\n");
	scanf_s("%d", &n);
	printf("English name is: %s", months[n - 1]);
	system("pause");
}
