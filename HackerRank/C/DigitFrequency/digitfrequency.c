#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *c;
	int len = 0;

	scanf("%ms", &c);

	char *p = c;

	for (; *p != '\0'; p++)
	{
		len++;
	}

	for (int i = 0; i < len; i++)
	{
		printf("%c ", c[i]);
	}
	puts("");
}
