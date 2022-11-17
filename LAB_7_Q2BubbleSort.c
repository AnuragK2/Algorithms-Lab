#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
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

    start = clock();
    printf("Enter n");
    scanf("%d",&n);
    while(1)
    {
        printf("\n1-best case\n2-average case\n3-Worst case\n4-Exit");
        int choice;
        scanf("%d",&n);
        if(choice==1)
        {
        for(int i=0;i<n;i++)
        arr[i]=10+i;
        }
        else if(choice==2)
        {
         for(int i=0;i<n;i++)
        arr[i]=rand()%11; 
        }
        else if(choice==3)
        {
        for(int i=0,p=999+n;i<n;i++,p--)
        arr[i]=p; 
        }
        else if(choice==4)
         return 0;
        
    bubbleSort(arr, arr_size);
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