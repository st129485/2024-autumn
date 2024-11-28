#include<cstdio>
#include<iostream>

int main(int argv, char* argc)
{
	int x1 = 0;
	scanf_s("%d", &x1);
	int y1 = 0;
	scanf_s("%d", &y1);
	int r1 = 0;
	scanf_s("%d", &r1);
	int x2 = 0;
	scanf_s("%d", &x2);
	int y2 = 0;
	scanf_s("%d", &y2);
	int r2 = 0;
	scanf_s("%d", &r2);

	int d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
	int r = (r1 + r2) * (r1 + r2);

	if (r1 < r2)
	{
		int a = r1;
		r1 = r2;
		r2 = a;

		int b = x1;
		x1 = x2;
		x2 = b;

		int c = y1;
		y1 = y2;
		y2 = c;
	}
	if (d > r1)
	{
		if (d > r)
		{
			printf("NO");
		}
		else printf("YES");
	}
	else if (r2 * r2 + 2 * r2 * d + d * d < r1 * r1)
	{
		printf("NO");
	}
	else printf("YES");
	return 0;
}