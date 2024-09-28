#include<cstdio>

int main(int argv, char* argc)
{
	int a = 0;
	scanf_s("%d", &a);
	int b = 0;
	scanf_s("%d", &b);
	int x = 0;
	scanf_s("%d", &x);
	int y = 0;
	scanf_s("%d", &y);

	if (a == x or b == y)
	{
		printf("YES");
	}
	else if (x - a == y - b or x - a == -(y - b))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}