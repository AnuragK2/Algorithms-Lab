#include <stdio.h>
#include <time.h>

int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    int a, b, c;
    clock_t start, end;
    double total_cputime;
    start = clock();


    // Wilson's Theorem
    int m = n - 1;
    int factm = 1;
    // find factorial of n-1
    for (int i = 1; i <= m; i++)
    {
        factm *= i;
    }

    // add 1 to (n-1)!
    int factn = factm + 1;
    if (factn % n == 0)
    {
        // if remainder is 0
        printf(" %d  is prime number", n);
    }
    else
    {
        printf("%d  is not prime number", n);
    }




    end = clock();
    printf("\nstarting time=%ld", start);
    printf("\nEnd time =%ld", end);

    total_cputime = ((double)(end - start));
    printf("\ntotal_cputime =%f", total_cputime);

    total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\ntotal_cputime in second =%f", total_cputime);

    return 0;
}
