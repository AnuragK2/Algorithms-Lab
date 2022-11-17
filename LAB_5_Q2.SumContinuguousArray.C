#include <stdio.h>
#include <time.h>

int main(){
    clock_t start, end;
    double total_cputime;
    start = clock();
    int arr[10] = {-2, -3, 4, -1, -2, 1, 5, -3, -3, -3};
    int max_sum = 0;
    int curr_sum = 0;
    int i = 0;
    int j = 0;
    for(i = 0; i < 10; i++){
        curr_sum += arr[i];
        if(curr_sum < 0){
            curr_sum = 0;
        }
        if(curr_sum > max_sum){
            max_sum = curr_sum;
            j = i;
        }
    }
    printf("\nmax_sum = %d", max_sum);
    printf("\nj = %d", j);
    end = clock();
    printf("\nstarting time=%ld", start);
    printf("\nEnd time =%ld", end);
    total_cputime = ((double)(end - start));
    printf("\ntotal_cputime =%f", total_cputime);
    total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\ntotal_cputime in second =%f", total_cputime);
    return 0;
}