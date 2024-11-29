#include<iostream>

int main(int argv, char* argc)
{
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;	
	int a2 = 0;
	int b2 = 0;
	int c2 = 0;

	scanf_s("%d", &a1);
	scanf_s("%d", &b1);
	scanf_s("%d", &c1);
	scanf_s("%d", &a2);
	scanf_s("%d", &b2);
	scanf_s("%d", &c2);


	// Сортировка по убыванию:
	if (a1 < b1)
	{
		int a = a1;
		a1 = b1;
		b1 = a;
	}
	if (a1 < c1)
	{
		int a = a1;
		a1 = c1;
		c1 = a;
	}
	if (b1 < c1)
	{
		int a = b1;
		b1 = c1;
		c1 = a;
	}

	if (a2 < b2)
	{
		int a = a2;
		a2 = b2;
		b2 = a;
	}
	if (a2 < c2)
	{
		int a = a2;
		a2 = c2;
		c2 = a;
	}
	if (b2 < c2)
	{
		int a = b2;
		b2 = c2;
		c2 = a;
	}


	if (a1 == a2 && b1 == b2 && c1 == c2)
	{
		printf("Boxes are equal");
	}
	else if (a1 >= a2 && b1 >= b2 && c1 >= c2)
	{
		printf("The first box is larger than the second one");
	}
	else if (a1 <= a2 && b1 <= b2 && c1 <= c2)
	{
		printf("The first box is smaller than the second one");
	}
	else
	{
		printf("Boxes are incomparable");
	}
	return 0;
}