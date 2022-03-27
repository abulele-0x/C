#include <stdio.h>
#include <unistd.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len, int endianness)
{
	int i;
	
	if(endianness == 0)
	{
		for(i = 0; i < len; i++)
		{
			printf(" %.2x", start[i]);
		}
		printf("\n");
	}
	else
	{
		for(i = len-1; i >= 0; i--)
		{
			printf(" %.2x", start[i]);
		}
		printf("\n");
	}
}

void show_int(int x, int endianness)
{
	show_bytes((byte_pointer) &x, sizeof(int), endianness);
}
/*
void show_float(float x)
{
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x)
{
	show_bytes((byte_pointer) &x, sizeof(void *));
}
*/

void usage()
{
	printf("Option: -a takes argument 0 or 1, for little or big endian, respectively.\n");
}

int main(int argc, char* argv[])
{
	int x;

	int e = 0;

	char ch;

	while((ch = getopt(argc, argv, "e:")) != EOF)
		switch(ch)
		{
			case 'e':
				e = (int)optarg;
				break;
			default:
				usage();
				break;
		}

	printf("Digite um inteiro: ");
	scanf("%d", &x);

	show_int(x, e);
}
