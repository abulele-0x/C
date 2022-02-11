#include <stdio.h>
#include <unistd.h>

typedef unsigned char *byte_order;


void show_bytes(byte_order b, size_t len)
{
	for(int i = len-1; i >= 0; i--)
	{
		printf(" %.2x", b[i]);
	}
	printf("\n");
}

int main()
{
	int n, leftshift, right_arithmetic, shift;
	unsigned int right_logical;

	printf("Entre com um número: ");
	scanf("%d", &n);

	right_logical = (unsigned int)n;

	printf("Shift de quantas posições? ");
	scanf("%d", &shift);
	puts("");

	printf("Valor inicial n: 0x%x | %d\n", n,n);
	show_bytes((byte_order)&n, sizeof(int));


	leftshift = n << shift;
	right_arithmetic = n >> shift;
	right_logical = right_logical >> shift;

	puts("");
	
	printf("Valor final left-shift: 0x%x | %d\n", leftshift, leftshift);
        show_bytes((byte_order)&leftshift, sizeof(int));
        puts("");                                 
	printf("Valor final right-arithmetic: 0x%x |  %d\n", right_arithmetic, right_arithmetic);
        show_bytes((byte_order)&right_arithmetic, sizeof(int));
        puts("");                                 
        printf("Valor final right-logical: 0x%x | %u\n", right_logical, right_logical);
        show_bytes((byte_order)&right_logical, sizeof(int));
	puts("");                                 




}
