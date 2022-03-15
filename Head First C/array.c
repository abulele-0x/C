#include <stdio.h>

int main()
{
	int array[10] = {4,3,2};

	printf("Size of array: %lu bytes\n", sizeof(array));
	printf("Capacidade do array: %lu itens\n", sizeof(array)/sizeof(int));
	for (int i = 0; i < 10; i++)
	{
		printf("array[%d] : %x\n", i, array[i]);
	}
	return 0;
}

