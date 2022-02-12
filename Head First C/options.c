#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
	int opt_a, opt_b, opt_c;
	char opt;

	while((opt = getopt(argc, argv, "abc")) != EOF)
		switch(opt)
		{
			case 'a':
				printf("Option 'a' selected.\n");
				break;
			case 'b':
				printf("Option 'b' selected.\n");
				break;
			case 'c':
				printf("Option 'c' selected.\n");
				break;
			default:
				printf("Invalid option chosen.");
		}



	
}
