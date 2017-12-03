#include <stdio.h>
#include <stdlib.h>

void printRow(const int b[], int low, int mid, int high)
{
	for (int i = 0; i < 15; i++)
	{
		if (i<low || i>high)
			printf(" ");
		else if (i == mid)
			printf("%3d*", b[i]);
		else
			printf("%3d ", b[i]);
	}
	printf("\n");
}

void printHeader()
{
	int i;

	printf("\nSubscripts:\n");

	for (i = 0; i < 15; i++)
	{
		printf("%3d ", i);
	}
	printf("\n");

	for (i = 1; i <= 60; ++i)
	{
		printf("-");
	}
	printf("\n");
}

int binarySearch(const int b[], int searchKey, int low, int high)
{
	int middle;

	if (low > high)
	{
		return -1;
	}
	middle = (low + high) / 2;
	printRow(b, low, middle, high);

	if (searchKey == b[middle])
	{
		return middle;
	}
	if (searchKey < b[middle])
	{
		return binarySearch(b, searchKey, low, middle - 1);
	}
	else
	{
		return binarySearch(b, searchKey, middle + 1, high);
	}
}

void main()
{
	int a[15], i, key, result;

	for (i = 0; i < 15; ++i)
	{
		a[i] = 2 * i;
	}
	printf("Enter a number between 0 and 28: ");
	scanf_s("%d", &key);

	printHeader();

	result = binarySearch(a, key, 0, 14);

	if (result != -1)
	{
		printf("\n%d found in array element %d\n", key, result);
	}
	else
	{
		printf("\n%d not found\n", key);
	}
	system("pause");
}