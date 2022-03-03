#include <stdio.h>

void fillArray(int size, int arr[size][size], int start, int finish, int n);

int main()
{
	int n, size;

	printf("Digite o tamanho do array: ");
	scanf("%d", &n);
	
	size = (2*n)-1;

	int array[size][size];
	
	fillArray(size, array, 0, size-1, n);

	//printing array
	
	for (int linha = 0; linha < size; linha++)
	{
		for(int coluna = 0; coluna < size;coluna++)
		{
			printf(" %d ", array[linha][coluna]);
		}
		puts("");
	}

}

void fillArray(int size, int arr[size][size], int start, int finish,int n)
{
	if (start == finish)
	{
		arr[start][finish] = n;
		return;
	}
	else
	{
		for (int i = start; i <= finish; i++)
		{
			arr[start][i] = n;
			arr[finish][i] = n;
			arr[i][start] = n;
			arr[i][finish] = n;
		}
	}
	fillArray(size, arr, start+1, finish-1, n-1);	
}
