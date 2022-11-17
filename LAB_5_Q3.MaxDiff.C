#include<stdio.h>
#include<time.h>
int maxDiff(int arr[], int arr_size)
{
int max_diff = arr[1] - arr[0];
int min_element = arr[0];
int i;
for(i = 1; i < arr_size; i++)
{     
    if (arr[i] - min_element > max_diff)                             
    max_diff = arr[i] - min_element;
    if (arr[i] < min_element)
        min_element = arr[i];                     
}
return max_diff;
} 
int main()
{
    clock_t start, end;
    double total_cputime;
    start = clock();
int arr[] = {1, 2, 6, 80, 100};
int size = sizeof(arr)/sizeof(arr[0]);
printf("Maximum difference is %d", maxDiff(arr, size));
getchar();
end = clock();
    printf("\nstarting time=%ld", start);
    printf("\nEnd time =%ld", end);
    total_cputime = ((double)(end - start));
    printf("\ntotal_cputime =%f", total_cputime);
    total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\ntotal_cputime in second =%f", total_cputime);
    return 0;
}