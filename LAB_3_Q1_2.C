#include <stdio.h>
#include <time.h>

int main()
{
    int num1, num2;
    clock_t start, end;
    double total_cputime;
    start = clock();

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // finding GCD using Euclid Theorem

    num1 = (num1 > 0) ? num1 : -num1;
    num2 = (num2 > 0) ? num2 : -num2;

    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 -= num2;
        }
        else
        {
            num2 -= num1;
        }
    }

    printf("GCD of two numbers: %d", num1);
    end = clock();
    printf("\nstarting time=%ld", start);
    printf("\nEnd time =%ld", end);

    total_cputime = ((double)(end - start));
    printf("\ntotal_cputime =%f", total_cputime);

    total_cputime = ((double)(end - start)) /CLOCKS_PER_SEC;
    printf("\ntotal_cputime in second =%f", total_cputime);

    return 0;
}