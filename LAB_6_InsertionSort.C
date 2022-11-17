#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void selectionSort(int number[], int size)
{
    int i, j, min, temp;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (number[j] > number[min]) min = j;
        }
        temp = number[i];
        number[i] = number[min];
        number[min] = temp;
    }
}
void insertionSort(int arr[], int arr_size)
{
    int i, j, temp;
    for (i = 1; i < arr_size; i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > temp; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
}
int main()
{
   clock_t start, end;
   double total_cputime;
   int size = 100;
   int arr[size];
   for (int i = 0; i < size; i++) arr[i] = rand() % 1000;
   int arr_size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, arr_size);
   start = clock();
   insertionSort(arr, arr_size - 1);
   end = clock();
    for (int i = 0; i < arr_size; i++) printf("%d ", arr[i]);
    printf("\n");
   printf("\nstarting time=%ld", start);
   printf("\nEnd time =%ld", end);
   total_cputime = ((double)(end - start));
   printf("\ntotal_cputime =%f", total_cputime);
   total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
   printf("\ntotal_cputime in second =%f", total_cputime);
   return 0;
}