#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void heapify(int arr[], int N, int i){
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < N && arr[left] > arr[largest])
		largest = left;
	if (right < N && arr[right] > arr[largest])
		largest = right;
	if (largest != i) {
		swap(&arr[i], &arr[largest]);
		heapify(arr, N, largest);
	}
}
void heapSort(int arr[], int N){
	for (int i = N / 2 - 1; i >= 0; i--)
		heapify(arr, N, i);
	for (int i = N - 1; i >= 0; i--) {
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}
void printArray(int arr[], int N){
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void kmax(int arr[], int N,int k) {
    heapSort(arr, N);
    printf("Number(%d) Maximum Value is : %d\n",k,arr[N-k]);
}
void kmin(int arr[], int N,int k) {
    heapSort(arr, N);
    printf("Number(%d) Minimum Value is : %d\n",k,arr[k-1]);
}
int main(){
    int size,k;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter value of k : ");
    scanf("%d",&k);
    int arr[size];
    for (int i = 0; i < size; i++) 
		arr[i] = rand() % 1000;
    printf("Before sorting array elements are - \n");  
    printArray(arr, size);  
    heapSort(arr, size);
	printf("Sorted array is\n");
	printArray(arr, size);
    kmax(arr,size,k);
    kmin(arr,size,k);
    return 0;
}