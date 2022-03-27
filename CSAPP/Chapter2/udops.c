#include <stdio.h>

int main()
{
	int x = -1;
	unsigned int y = 0;

	printf("Soma %d + %u : %u\n", x,y, x+y);
	printf("Soma %d + %u : %d\n", x,y, x+y);

	if (x < y)
		/*
		 * A expressão será avaliada como falsa porque quando comparamos
		 * o x (signed) com  y (unsigned), o x passa a ser tratado também como unsigned.
		 * E -1 é representado por 0xFF...FF que, pra unsigned é UINT_MAX.
		 */
	{
		puts("Menor.");
	}
	else
	{
		puts("Deu ruim");
	}
	return 0;
}
