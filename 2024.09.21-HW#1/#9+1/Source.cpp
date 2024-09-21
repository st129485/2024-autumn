#include<iostream>

int main(int argc, char* argv[])
{
	int S = 0;
	scanf_s("%d", &S);
	int p = S / 6;
	int k = S / 6 * 4;
	int s = S / 6;
	printf("%d %d %d", p, k, s);

	return EXIT_SUCCESS;
}