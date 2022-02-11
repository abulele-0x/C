#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

//This is how integers are represented
//
//Unsigned encoding
//Is the usual 100010001 where the bit position, if active,
//represents its value. Bit 7, when set to 1, has value
//2^7 = 128
//
//Two's Complements, when the MSB is active, it's numeric value is the same as it would be on Unsigned Encoding, but with a negative sign.
//
//Bit 7, on two's complements rep would equal -128
//So 1110 on Two's Complements would be: -8 + 4 + 2 + 0 = -2
//To convert, just invert the bits from the unsigned rep and
//add 1
//If I want to get negative 2 I first invert all bits:
//0010 goes to 1101
//Add 1
//1101 + 1 = 1110
//

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer b, size_t len)
{
	for(int i = len-1; i >= 0; i--)
	{
		printf(" %.2x", b[i]);
	}	
	puts("");
}


int main()
{
	int x;
	int8_t _8bits;
	int16_t _16bits;
	uint8_t _8unsigned;
	uint16_t _16unsigned;

	/*

	printf("Digita um número: ");
	scanf("%d", &x);

	printf("Representacao hex: \n");
	show_bytes((byte_pointer)&x, sizeof(x));
	*/

	printf("Valor de 8bits signed: ");
	scanf("%hhd", &_8bits);
	
	printf("Valor de 8bits unsigned: ");
	scanf("%hhu", &_8unsigned);           	

	printf("Valor de 16bits signed: ");
	scanf("%hd", &_16bits);

	printf("Valor de 16bits unsigned: ");
	scanf("%hu", &_16unsigned);           	

	puts("");

	printf("8 bits signed: %" PRId8 " | size: %lu byte(s)\n\n", _8bits, sizeof(_8bits));
	show_bytes((byte_pointer)&_8bits, sizeof(_8bits));
	puts("");
	printf("8 bits unsigned: %" PRIu8 " | size: %lu byte(s)\n\n", _8unsigned, sizeof(_8unsigned));
	show_bytes((byte_pointer)&_8unsigned, sizeof(_8unsigned));
	puts("");

	printf("16 bits signed: %" PRId16 " | size: %lu byte(s)\n\n", _16bits, sizeof(_16bits));
	show_bytes((byte_pointer)&_16bits, sizeof(_16bits));
	puts("");

	printf("16 bits unsigned: %" PRIu16 " | size: %lu byte(s)\n\n", _16unsigned, sizeof(_16unsigned));
	show_bytes((byte_pointer)&_16unsigned, sizeof(_16unsigned));
	
	return 0;
}

