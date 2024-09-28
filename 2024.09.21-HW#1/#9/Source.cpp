#include<iostream>

int main(int argc, char* argv[])
{
	int h = 0;
	scanf_s("%d", &h);
	int a = 0;
	scanf_s("%d", &a);
	int b = 0;
	scanf_s("%d", &b);
	int day = 0;
	h += (((a - b) - h % (a - b)) % (a - b));
	h = (h - a) * ((h / a) - ((h - a) / a));
	day += 1;
	h += (((a - b) - h % (a - b)) % (a - b));
	day += h / (a - b);
	printf("%d", day);
	return EXIT_SUCCESS;
}