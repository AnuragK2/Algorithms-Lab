#include<stdio.h>
 #include<time.h>
// function prototyping
void heapify(int*,int, int);
void heapsort(int*, int);
void print_array(int*, int);
 
int main()
{
    clock_t start,end;
    double total_cputime;
int size = 20;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 1000;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printf("\nArray before sorting:\n");
    print_array(arr, n);
 start=clock();
    heapsort(arr, n);
 
    printf("\n\nArray after sorting:\n");
    print_array(arr, n);
    end=clock();
    printf("\nstarting time=%ld", start);
    printf("\nEnd time =%ld", end);
 
 total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
 printf("\n Total Cputime in secs is: %f ", total_cputime);
    return 0;
    
}
 
/* sorts the given array of n size */
void heapsort(int* arr, int n)
{
    // build the binary max heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
 
    // sort the max heap
    for (int i = n - 1; i >= 0; i--)
    {
        // swap the root node and the last leaf node
        int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
 
        // again heapify the max heap from the root 
        heapify(arr, i, 0);
    }
}
 
/* heapify the subtree with root i */
void heapify(int* arr, int n, int i)
{
    // store largest as the root element
    int largest = i;
 
    int left = 2 * i + 1;
    int right  = 2 * i + 2;
 
    // now check whether the right and left right is larger than the root or not
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
 
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
 
    // if the root is smaller than the children then swap it with the largest children's value
    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
 
        // again heapify that side of the heap where the root has gone
        heapify(arr, n, largest);
    }
}
 
/* printf the array */
void print_array(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
 