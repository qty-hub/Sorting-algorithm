// C program for insertion sort
#include <math.h>
#include <stdio.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int array[], int data){
	int i, key, j;
	for(i=1;i<data;i++){
		key=array[i];
		j=i-1;
		/* Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position */
		while(j>=0&&array[j]>key){
			array[j+1]=array[j];
			j=j-1;
		}
		array[j+1]=key;
	}
}

// A utility function to print an array of size n
void printArray(int array[], int data){
	int i;
	for(i=0;i<data;i++){
		printf("%d ", array[i]);
		printf("\n");
	}
}

/* Driver program to test insertion sort */
int main(){
	int array[]={23, 67, 89, 5, 45, 20, 15, 27};
	int data=sizeof(array)/sizeof(array[0]);
	insertionSort(array, data);
	printf("Hasil array insertion sort: \n");
	printArray(array, data);
	return 0;
}

