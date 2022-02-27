#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int array[], int data){
	int i, j, min_index;
	for(i=0;i<data-1;i++){
		min_index=i;
		for(j=i+1;j<data;j++){
			if(array[j]<array[min_index]){
				min_index=j;
			}
		}
		swap(&array[min_index], &array[i]);
	}
}

void printArray(int array[], int ukuran){
	int i;
	for(i=0;i<ukuran;i++){
		printf("%d ", array[i]);
		printf("\n");
	}
}

int main(){
	int array[]={23, 67, 89, 5, 45, 20, 15, 27};
	int n=sizeof(array)/sizeof(array[0]);
	selectionSort(array, n);
	printf("Hasil array selection sort: \n");
	printArray(array, n);
	return 0;
}

