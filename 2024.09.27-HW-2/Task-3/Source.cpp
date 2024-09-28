#include<cstdio>

int main(int argv, char* argc)
{
	int a = 0;
	scanf_s("%d", &a);
	int b = 0;
	scanf_s("%d", &b);
	int c = 0;
	scanf_s("%d", &c);
	int x = 0;
	scanf_s("%d", &x);
	int y = 0;
	scanf_s("%d", &y);
	int z = 0;
	scanf_s("%d", &z);

	int d = (a - x) * (a - x) + (b - y) * (b - y);
	int r = (c + z) * (c + z);

	if (d == r or d < r)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}