#include <stdio.h>

int main()
{
	typedef union {
		float flutua;
		int interin;
		char charizard;
	} tipinhos;

	enum type 
        {
        	FLOAT, INTEGER, CHAR
	};      

	typedef struct {
		char *nome;
		int idade;
		tipinhos tipo1;
		enum type dado;
	} person;

	person eu = {"Caio", 15, {.charizard = 'c'}, CHAR};

	if (eu.dado == CHAR){
		printf("Nome: %s , idade: %d, letra: %c, dado: char\n", eu.nome, eu.idade, eu.tipo1.charizard);
	}
	return 0;
}
