#include <stdio.h>

int bis(int x, int m);
int bic(int x, int m);
int bool_or(int x, int y);
int bool_xor(int x, int y);

int main()
{
	unsigned int i1, i2;
	printf("Enter an int: ");
	scanf("%u", &i1);

	printf("Enter another int: ");
	scanf("%u", &i2);

	printf("Bool OR %x | %x: 0x%x\n", i1, i2, bool_or(i1,i2));
	printf("Bool XOR %x ^ %x: 0x%x\n", i1, i2, bool_xor(i1,i2));

	return 0;
}

int bis(int x, int m)
{
	return x | m;
}

int bic(int x, int m)
{
	return x & ~m;
}

int bool_or(int x, int y)
{
	return bis(x,y);
}

int bool_xor(int x, int y)
{
	return bis(bic(x,y), bic(y,x));
}
