#include <stdio.h>
int main()
{
	char *month_name[13] = { "illegal month", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int n;
	printf("Input the month:\n");
	scanf_s("%d", &n);
	if ((n <= 12) && (n >= 1))
		printf("%s\n", *(month_name + n));
	else
		printf("%s", *(month_name));
	return 0;
}
