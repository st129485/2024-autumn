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
	
	if (a == x && b == y && c == z || a == x && b == z && c == y || a == y && b == z && c == x || a == y && b == x && c == z || a == z && b == y && c == x || a == z && b == x && c == y)
	{
		printf("Boxes are equal");
	}
	else if (a > x && b == y && c == z || a > x && b == z && c == y || a == y && b > z && c == x || a == y && b > x && c == z || a == z && b == y && c > x || a == z && b == x && c > y)
	{
		printf("The first box is larger than the second one");
	}
	else if (a > x && b > y && c > z || a > x && b > y && c == z || a > x && b == y && c > z || a == x && b > y && c > z)
	{
		printf("The first box is larger than the second one");
	}
	else if (a < x && b == y && c == z || a < x && b == z && c == y || a == y && b < z && c == x || a == y && b < x && c == z || a == z && b == y && c < x || a == z && b == x && c < y)
	{
		printf("The first box is smaller than the second one");
	}
	else if (a < x && b < y && c < z || a < x && b < y && c == z || a < x && b == y && c < z || a == x && b < y && c < z)
	{
		printf("The first box is smaller than the second one");
	}
	else
	{
		printf("Boxes are incomparable");
	}
	return 0;
}