#include "xor.h"
#include <stdio.h>

void encrypt(char *message)
{
	while (*message)
	{
		printf("Value of %p: '%c' - %x\n", message, *message, *message);
		*message ^= 31;
		
		printf("Value of %p after xor: '%c' - %x\n", message, *message, *message);
		message++;
		printf("Value of 'message' after increment: %p\n\n", message);
		
	}

}

