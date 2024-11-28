#include<cstdio>
#include<cmath>

int main(int argv, char* argc)
{
	int n = 0;
	scanf_s("%d", &n);
	int m = 0;
	scanf_s("%d", &m);
	printf("%d", n * (m + 1) + m + m * (n + 1) + n );
	return 0;
}