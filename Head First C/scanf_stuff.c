#include <stdio.h>

int main()
{
	short int i = 2;
	int day = 0, month = 0, year = 0;
/*
	scanf("%hd\n" , &i);
	printf("%d - size: %lu bytes\n", i, sizeof(i));
	printf("%x\n", i);

	printf("Size of int: %lu bytes\n", sizeof(day));
	scanf("%d/%d/%d", &day, &month, &year);
	printf("%d/%d/%d\n", day, month, year);
*/
	char *c;
	int count = 0;
	scanf("%ms", &c); //This 'm' will make allocate a buffer the size of the input and put its address on pointer variable

	printf("c starts on %p\n", c);
	for (;*c != '\0';c++)
	{
		printf("%x ", *c);
		count++;
	}
	puts("");
	printf("number of chars: %d\n", count);
}
