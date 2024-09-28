#include<cstdio>

int main(int argv, char* argc)
{
	int x = 0;
	scanf_s("%d", &x);
	int y = 0;
	scanf_s("%d", &y);

	if (x == 1 and y == 1)
	{
		printf("%d", 0);
	}
	else if (x == y)
	{
		printf("%d", 2);
	}
	else if (x % 2 == 1 or y % 2 == 1)
	{
		printf("%d", 1);
	}
	else
	{
		printf("%d", 2);
	}
	return 0;
}