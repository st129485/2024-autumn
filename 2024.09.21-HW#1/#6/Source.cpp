#include<iostream>

int main(int argc, char* argv[])
{
	int g = 0;
	scanf_s("%d", &g);
	int l = 0;
	scanf_s("%d", &l);
	printf("%d %d", l - 1, g - 1);
	return EXIT_SUCCESS;
}