#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	scanf_s("%d", &a);
	printf("The next number for the number %d is %d.\n", a, a + 1);
	printf("The previous number for the number %d is %d.", a, a - 1);
	return EXIT_SUCCESS;
}