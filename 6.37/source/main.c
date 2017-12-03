#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(const int a[], int size)
{
	int b = 0;

	if (size == 1) return *a;
	b = recursiveMaximum(a + 1, size - 1);
	return *a > b ? *a : b;
}

void main()
{
	int a[20], size;

	scanf_s("%d", &size);
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("%d\n", recursiveMaximum(a, size));

	system("pause");
}