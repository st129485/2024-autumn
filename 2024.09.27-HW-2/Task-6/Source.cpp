#include<cstdio>
#include<cmath>

int main(int argv, char* argc)
{
	int a = 0;
	scanf_s("%d", &a);
	int b = 0;
	scanf_s("%d", &b);
	int c = 0;
	scanf_s("%d", &c);

	double d = b * b - 4 * a * c;

	if (a == 0 && b == 0 && c == 0)
	{
		printf("%d", -1);
	}
	else if (a == 0 && b == 0 && c != 0 || d < 0)
	{
		printf("%d", 0);
	}
	else if (a == 0 && b != 0 && c != 0)
	{
		printf("%d\n %d", 1, (-c) / b);
	}
	else if (d == 0)
	{
		printf("%d\n %d", 1, -b / (2 * a));
	}
	else 
	{
		printf("%d\n %f\n %f", 2, (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
	}
	return 0;
}