#include <stdio.h>

int main()
{

	int num = 200 * 300 * 400 * 500;
	long num2 = 200*300*400*500;

	printf("Tamanho int: %d\n", sizeof(int));
	printf("%d\n", num);

	printf("Tamanho long: %d\n", sizeof(long));
	printf("%ld\n", num2);
}
