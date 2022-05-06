#include <stdio.h>
#include <stdlib.h>

int compare_ints (const void *val_a, const void *val_b);

typedef struct{
	int width;
	int height;
}rectangle;

int main(){
	int sorts[] = {15,112,34,78,95,34,97,114};
	rectangle recs[] = {
		{.height = 5, .width = 14},
		{.height = 12, .width = 7},
		{.height = 4,.width = 4}
	};

	int areas[3];

	//qsort(char *array, size_t array_size, size_t size_of_item, int (*compareto)(const void *, const void *)
	for (int i = 0; i < 3; i++){
		areas[i] = (recs[i].height * recs[i].width);
	}
	
	for (int i = 0; i < 3; i++){
		printf("%d ", areas[i]);
	}
	puts("");

	qsort(areas, 3, sizeof(int), compare_ints);

	for (int i = 0; i < 3; i++){
		printf("%d ", areas[i]);
	}
	puts("");                      
}

int compare_ints(const void *val_a, const void *val_b){
	int a = *(int*)val_a;
	int b = *(int*)val_b;

	return a -b;
}
