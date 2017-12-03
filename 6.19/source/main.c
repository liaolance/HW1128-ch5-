#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void toss(int a[])
{
	for (int i = 1; i <= 36000; ++i)
	{
		a[rand() % 6 + rand() % 6 + 1]++;
	}
}

void main()
{
	int a[12];

	memset(a, 0, sizeof(a));
	srand(time(0));
	toss(a);

	printf("Points\tTimes\n");
	for (int i = 1; i < 12; i++)
	{
		printf("%d\t%d\n", i + 1, a[i]);
	}

	system("pause");
}