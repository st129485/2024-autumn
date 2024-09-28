#include<cstdio>
#include<cmath>

int main(int argv, char* argc)
{
	int k = 0;
	scanf_s("%d", &k);
	int m = 0;
	scanf_s("%d", &m);
	int n = 0;
	scanf_s("%d", &n);

	if (k >= n)
	{
		printf("%d", 2 * m);
	}
	else if (n % k != 0)
	{
		printf("%d", 2 * m * (n / k + 1));
	}
	else
	{
		printf("%d", 2 * m * (n / k));
	}
	return 0;
}