#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Binary Search
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

// Sort Array
void sortArray(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    clock_t start, end;
    double total_cputime;
    int size = 1000;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 1000;
    }
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, arr_size);


    int n1 = arr[0];
    int n2 = arr[(int)arr_size/2];
    start = clock();

    int result = binarySearch(arr, 0, arr_size - 1, n2);
    end = clock();

    if(result != -1)
    {
        printf("%d found at %d\n", n2, result);
    }
    else
    {
        printf("%d not found\n", n1);
    }

    printf("\nstarting time=%ld", start);
    printf("\nEnd time =%ld", end);

    total_cputime = ((double)(end - start));
    printf("\ntotal_cputime =%f", total_cputime);

    total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\ntotal_cputime in second =%f", total_cputime);

    return 0;
}