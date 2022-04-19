# Exercício Printing Pattern do HackerRank

Eu não lembro se esse é o nome mesmo, mas não importa.

O exercício pede, dado um número 'n', seja impresso um padrão. Exemplo: n = 4

4 4 4 4 4 4 4  
4 3 3 3 3 3 4  
4 3 2 2 2 3 4  
4 3 2 1 2 3 4  
4 3 2 2 2 3 4  
4 3 3 3 3 3 4  
4 4 4 4 4 4 4  
  
O padrão que eu notei, e no qual decidi basear meu algoritmo, foi:

- Formam-se quadrados dentro de quadrados.
- 'n' passa a ser o número que representa o quadrado mais externo e vai-se reduzindo até chegar em n = 1
- Então, tem um quadrado formado por números 4, um quadrado mais interno formado por números 3, etc.

A função fillArray() é a mais importante.

Primeiro, é calculado o tamanho da array que receberá todos os valores. Uma array multidimensional.

A array será de [(2*n) - 1] x [(2*n) -1].

Se n = 4, array será 7x7.

A função fillArray() recebe como parâmetros:

- Tamanho da array original, pois a array multidimensional deve ser passada como parâmetro e tem que ter o tamanho.- A array, em si. (Passada por referência, não por valor).
- 'start' representa o ponto de partida do loop, durante o preenchimento da array. Ex.:
	Na primeira chamada da função, start vai ser 0 porque estamos preenchendo a borda mais externa,
	de índice 0; na segunda chamada (recursiva), start vai ser 1, na próxima vai ser 2...
- 'finish' representa o valor máximo onde o loop deve chegar e este vai reduzindo a cada chamada recursiva.

- Para preencher o array, segui a seguinte lógica:
	(1) Preencher a aresta de cima do quadrado de [0, 0] até [0,6] ou [start, 0] até [start, 6] 
	Note que **start**, neste caso, é 0 e **finish** é 6:

	Ainda pensando que 'n' = 4, teremos:
	
		**colunas**
		
        	0|1|2|3|4|5|6
               ---------------
           ** 0|4|4|4|4|4|4|4 **
              ----------------
              1| | | | | | | 
           l  ----------------
           i  2| | | | | | | 
           n  ----------------
           h  3| | | | | | | 
           a  ----------------
           s  4| | | | | | | 
              ----------------
              5| | | | | | | 
              ----------------
              6| | | | | | |
              ----------------
	
	(2) Preencher a aresta inferior com 4s - de [6,0] até [6,6] ou [finish,0] até [finish,6]:
	        
		**colunas**
		
        	0|1|2|3|4|5|6
               ---------------
              0|4|4|4|4|4|4|4
              ----------------
              1| | | | | | | 
           l  ----------------
           i  2| | | | | | | 
           n  ----------------
           h  3| | | | | | | 
           a  ----------------
           s  4| | | | | | | 
              ----------------
              5| | | | | | | 
              ----------------
           ** 6|4|4|4|4|4|4|4 **
              ----------------

	(3) Preencher a aresta esquerda com 4s - de [0, 0] até [6,0] ou [0, start] até [6, start]:

	        **colunas**

        	0|1|2|3|4|5|6
               ---------------
              0|4|4|4|4|4|4|4
              ----------------
              1|4| | | | | | 
           l  ----------------
           i  2|4| | | | | | 
           n  ----------------
           h  3|4| | | | | | 
           a  ----------------
           s  4|4| | | | | | 
              ----------------
              5|4| | | | | | 
              ----------------
              6|4|4|4|4|4|4|4 
              ----------------

	(4) Preencher a aresta direita com 4s - [0, 6] até [6,6] ou [0, finish] até [6, finish]:
	        **colunas**

        	0|1|2|3|4|5|6
               ---------------
              0|4|4|4|4|4|4|4
              ----------------
              1|4| | | | | |4 
           l  ----------------
           i  2|4| | | | | |4
           n  ----------------
           h  3|4| | | | | |4
           a  ----------------
           s  4|4| | | | | |4
              ----------------
              5|4| | | | | |4
              ----------------
              6|4|4|4|4|4|4|4 
              ----------------

	Pronto, para um valor 'n' = 4, preenchemos o quadrado mais externo.
	Para preencher os quadrados mais internos, basta chamarmos a função novamente passando os novos 
	parâmetros:

	size - se mantém constante.
	array - se mantém constante.
	start agora incrementamos em 1;
	finish agora decrementamos em 1;
	n decrementamos em 1;

	fillArray(size, array[size][size], start+1, finish-1, n-1);

	Agora o quadrado mais interno será preenchido da mesma forma que o anterior, mas com o número 3.
	E assim será até que, na chamada da recursão, start seja igual a finish - **significando que chegamos
	no exato meio da array multidimensional, onde o valor será 1 e a recursão termina.**
