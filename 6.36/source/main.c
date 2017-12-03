#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringReverse(const char *s, int p)
{
	if (p < 0) return;
	printf("%c", s[p]);
	stringReverse(s, p - 1);
}

void main()
{
	char s[20];

	scanf_s("%s", &s, 20);
	stringReverse(s, strlen(s) - 1);
	printf("\n");

	system("pause");
}