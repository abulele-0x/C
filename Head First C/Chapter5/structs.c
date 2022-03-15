#include <stdio.h>

int main()
{
	struct fish {
		const char* name;
		const char* species;
		int teeth;
		int age;
	};

	struct fish snappy = {
		"Flipper",
		"water fish",
		5,
		2
	};

	printf("The struct snappy is at address: %p\n", &snappy);
	printf("%s - in address: %p - points to %p - size %lu bytes\n", snappy.name, &(snappy.name), snappy.name, sizeof(snappy.name));
	printf("%s - in address: %p - points to %p - size %lu bytes\n", snappy.species, &(snappy.species), snappy.species,sizeof(snappy.species));
	printf("%d - in address: %p\n", snappy.teeth, &(snappy.teeth));
	printf("%d - in address: %p\n", snappy.age, &(snappy.age));
	printf("Struct's total size is %lu\n", sizeof(snappy));





	
}
