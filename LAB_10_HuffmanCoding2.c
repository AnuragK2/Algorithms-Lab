#include<stdio.h>
#include <time.h>

// huffman coding using greedy algo
void huffman(int a[], int n)
{
    int i, j, k, l, m, min1, min2, sum = 0;
    int b[20], c[20];
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
        c[i] = 0;
    }
    for (i = 0; i < n - 1; i++)
    {
        min1 = min2 = 999;
        for (j = 0; j < n; j++)
        {
            if (b[j] < min1 && b[j] != 0)
            {
                min2 = min1;
                k = j;
                min1 = b[j];
            }
            else if (b[j] < min2 && b[j] != 0)
            {
                min2 = b[j];
                l = j;
            }
        }
        b[k] = min1 + min2;
        b[l] = 0;
        c[k] = 1;
        for (m = 0; m < n; m++)
        {
            if (c[m] == 1)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
        sum = sum + min1 + min2;
    }
    printf("Sum of all the minimum cost is %d", sum);
}

int main() {

    int a[6] = { 5, 9, 12, 13, 16, 45 };

    clock_t start, end;
    double total_cputime;

    start = clock();
    huffman(a,6);
    end = clock();
    
    printf("\nstarting time=%ld", start);
    printf("\nEnd time =%ld", end);

    total_cputime = ((double)(end - start));
    printf("\ntotal_cputime =%f", total_cputime);

    total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\ntotal_cputime in second =%f", total_cputime);

    return 0;
}