#include <stdio.h>

int main()
{
	typedef union {
		float flutua;
		int interin;
		char charizard;
	} tipinhos;

	typedef enum {
    	FLOAT, INTEGER = 2, CHAR, BLU, BLA = 9, BLE
	} type;      

	typedef struct {
		char *nome;
		int idade;
		tipinhos tipo1;
		type dado;
	} person;

	person eu = {"Caio", 15, {.charizard = 'c'}, CHAR};

	if (eu.dado == CHAR){
		printf("Nome: %s , idade: %d, letra: %c, dado: char\n", eu.nome, eu.idade, eu.tipo1.charizard);
	}
	/*
		enums podem ter números designados ou inicializarem automaticamente.
		Se a numeração começa a partir do segundo item, o primeiro será 0.
		Se o primeiro for inicializado em qualquer número, os outros seguirão a
		sequência.
		Se um ENUM anterior for numerado e seu subsequente não, o último seguirá a sequência do anterior.

		ENUM = {BLA, BLE = 2, BLI, BLO=8, BLU}
		
		BLA será 0
		BLI será 3
		BLU será 9
	*/
	type teste1 = FLOAT;
	type teste2 = INTEGER;
	type teste3 = CHAR;
	type teste4 = BLU;
	type teste5 = BLA;
	type teste6 = BLE;

	printf("teste 1 - FLOAT - valor: %d\n", teste1);
	printf("teste 2 - INTEGER - valor: %d\n", teste2);
	printf("teste 3 - CHAR - valor: %d\n", teste3);
	printf("teste 4 - BLU - valor: %d\n", teste4);
	printf("teste 2 - BLA - valor: %d\n", teste5);
	printf("teste 3 - BLE - valor: %d\n", teste6);
	
	return 0;
}
