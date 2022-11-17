#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
void quicksort(int number[25], int first, int last)
{
   int i, j, pivot, temp;
   if (first < last)
   {
      pivot = first;
      i = first;
      j = last;
      while (i < j)
      {
         while (number[i] <= number[pivot] && i < last)
            i++;
         while (number[j] > number[pivot])
            j--;
         if (i < j)
         {
            temp = number[i];
            number[i] = number[j];
            number[j] = temp;
         }
      }
      temp = number[pivot];
      number[pivot] = number[j];
      number[j] = temp;
      quicksort(number, first, j - 1);
      quicksort(number, j + 1, last);
   }
}
 
int main()
{
 
   clock_t start, end;
   double total_cputime;
 
   int size;
   scanf("%d",&size);
   int arr[size];
   for (int i = 0; i < size; i++)
   {
      arr[i] = rand() % 1000;
   }
   int arr_size = sizeof(arr) / sizeof(arr[0]);
 
   start = clock();
   quicksort(arr, 0, arr_size - 1);
   end = clock();
 
   // print array
   for (int i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
 
   printf("\nstarting time=%ld", start);
   printf("\nEnd time =%ld", end);
   total_cputime = ((double)(end - start));
   printf("\ntotal_cputime =%f", total_cputime);
   total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
   printf("\ntotal_cputime in second =%f", total_cputime);
   return 0;
}