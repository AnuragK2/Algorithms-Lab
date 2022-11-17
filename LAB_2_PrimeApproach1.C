#include <stdio.h>
#include <time.h>
#include<math.h>
int main()
{
    int n;
    clock_t start, end;
    double total_cputime;
    start = clock();
    bool flag=0;

    // T(n) = O(n^1/2)
    printf("Enter a number: \n");
 
    scanf("%d", &n);
 
    for (int i = 2; i <= sqrt(n); i++) {
 
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
 
    if (n <= 1)
        flag = 0;
 
    if (flag == 1) {
        printf("%d is a prime number", n);
    }
    else {
        printf("%d is not a prime number", n);
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