#include <stdio.h>
#include <math.h>

void insertionSort(int array[], int data){
	int i, k, j;
	for(i=1;i<data;i++){
		k=array[i];
		j=i-1;
		while(j>=0&&array[j]>k){
			array[j+1]=array[j];
			j=j-1;
		}
		array[j+1]=k;
	}
}

void printArray(int array[], int data){
	int i;
	for(i=0;i<data;i++){
		printf("%d ", array[i]);
		printf("\n");
	}
}

int main(){
	int array[]={23, 67, 89, 5, 45, 20, 15, 27};
	int data=sizeof(array)/sizeof(array[0]);
	insertionSort(array, data);
	printf("Hasil array insertion sort: \n");
	printArray(array, data);
	return 0;
}
