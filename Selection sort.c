// C program for implementation of selection sort
#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int array[], int data){
	int i, j, min_index;
	// One by one move boundary of unsorted subarray
	for (i=0;i<data-1;i++){
		// Find the minimum element in unsorted array
		min_index=i;
		for (j=i+1;j<data;j++){
			if (array[j] < array[min_index]){
				min_index=j;
			}
		}
		// Swap the found minimum element with the first element
		swap(&array[min_index], &array[i]);
	}
}

/* Function to print an array */
void printArray(int array[], int ukuran){
	int i;
	for(i=0;i<ukuran;i++){
		printf("%d ", array[i]);
		printf("\n");
	}
}

// Driver program to test above functions
int main(){
	int array[]={64, 25, 12, 22, 11};
	int n=sizeof(array)/sizeof(array[0]);
	selectionSort(array, n);
	printf("Hasil array selection sort: \n");
	printArray(array, n);
	return 0;
}

