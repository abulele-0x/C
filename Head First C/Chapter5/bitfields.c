#include <stdio.h>

typedef unsigned char *byte_printer;
typedef enum {BIG, LITTLE} endianness;

//this functions prints the hex values of whatever is passed into it. Big-endian.
void printbytes (byte_printer start, size_t len, endianness littlebig)
{
	switch(littlebig)
		{
			case BIG:
				for (int i = len-1; i >= 0; i--)
					{
						printf(" %.2x", start[i]);
					}
				puts("");
				break;
			case LITTLE:
				for (int i = 0; i < len; i++)
					{
						printf(" %.2x", start[i]);
					}
				puts("");
				break;
			default:
				printf("Specify LITTLE OR BIG.\n");
				break;
		}
}

int main()
{
	typedef struct{
		unsigned char field1:3;
		unsigned char field2:1;
	/*	unsigned char field3:1;
		unsigned char field4:1;
		unsigned char field5:1;
		unsigned char field6:1;
		unsigned char field7:1;
		unsigned char field8:1;
		unsigned char field9:8;
	*/
	} bitfield;

	bitfield field = {15, 1};

	printbytes((byte_printer)&field, sizeof(field), BIG);
	printf("Valor decimal: %d\n", field.field1+field.field2);
	/*
		Declaring a 3-bit long bitfield, even though you technically have
		8-bits available, only the first 3 will be interpreted. 
		The rest seems to be discarded.

		15 fits in 8 bits, but when you try to put it into the struct bitfield
		it truncates to 3 bits, because that's what was defined on the struct.
	*/
	return 0;
}