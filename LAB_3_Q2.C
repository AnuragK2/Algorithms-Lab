#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input();

// Sort an array on n integers using insertion sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
// insert n randrom numbers to an array
void randomArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
}

// display the array
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// sort the array in decending order
void sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // menue driven program
    int choice, n, i;
    clock_t start, end;
    double total_cputime;

    while (1)
    {
        printf("0. Exit\n");
        printf("1. Insert n random numbers to an array\n");
        printf("2. Display the array\n");
        printf("3. Sort the array in ascending order\n");
        printf("4. Sort the array in decending order\n");
        printf("5. Time Complexity to sort ascending of random data\n");
        printf("6. Time Complexity to sort ascending of data already sorted in ascending order\n");
        printf("7. Time Complexity to sort ascending of data already sorted in decending order\n");
        printf("8. Time Complexity to sort ascending of data for all Cases (Data Ascending, Data in descending & Random Data) in Tabular form for values n=5000 to 50000, step=5000\n");

        printf("Enter your choice: ");
        choice = input();
        switch (choice)
        {
        case 0:
            printf("Exiting the program\n");
            exit(1);
            break;
        case 1:
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            // dynamic mermory allocation array
            int *arr = (int *)malloc(n * sizeof(int));
            randomArray(arr, n);
            printf("The random array is: ");
            display(arr, n);
            break;
        case 3:
            insertionSort(arr, n);
            printf("The sorted array is: ");
            display(arr, n);
            break;

        case 4:
            sort(arr, n);
            printf("The sorted array is: ");
            display(arr, n);
            break;
        case 5:
            start = clock();
            insertionSort(arr, n);
            end = clock();
            printf("The total time taken to sort the array is: %f seconds\n", ((double)(end - start)) / CLOCKS_PER_SEC);
            break;

        case 6:
            start = clock();
            sort(arr, n);
            end = clock();
            printf("The total time taken to sort the array is: %f seconds\n", ((double)(end - start)) / CLOCKS_PER_SEC);
            break;

        case 7:
            start = clock();
            sort(arr, n);
            end = clock();
            printf("The total time taken to sort the array is: %f seconds\n", ((double)(end - start)) / CLOCKS_PER_SEC);
            break;

        case 8:
            start = clock();
            insertionSort(arr, n);
            sort(arr, n);
            end = clock();
            printf("The total time taken to sort the array is: %f seconds\n", ((double)(end - start)) / CLOCKS_PER_SEC);
            break;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}
