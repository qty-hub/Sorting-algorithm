// C program for implementation of Bubble sort
#include <stdio.h>

void tukar(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

// A function to implement bubble sort
void bubbleSort(int array[], int data){
	int i, j;
	for(i=0;i<data-1;i++){
		// Last i elements are already in place
		for(j=0;j<data-i-1;j++){
			if(array[j]>array[j+1]){
				tukar(&array[j], &array[j+1]);
			}
		}
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
	int array[]={23, 67, 89, 5, 45, 20, 15, 27};
	int data=sizeof(array)/sizeof(array[0]);
	bubbleSort(array, data);
	printf("Hasil array bubble sort: \n");
	printArray(array, data);
	return 0;
}
