#include <stdio.h>
#include <stdint.h>

int main(){
	unsigned long int num = 200*300*400*500;
	int32_t num_32 = 32;
	int64_t num_64 = 64;

	printf("Size of int32_t: %lu bytes\n", sizeof(int32_t));
	printf("Size of int64_t: %lu bytes\n", sizeof(int64_t));

	printf("Tamanho: %lu bytes\n", sizeof(num));
	printf("%lu\n", num);
}
