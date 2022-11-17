#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int num, temp = 0;
clock_t start,end;
double total_cputime;

    // read input from the user.

    printf("Enter any number to Check for Prime: ");

    scanf("%d", &num);
    start=clock();
    // initialization

    int i = 2; 

    // loop condition

    while (i <= num / 2)

    {

        // check if num is divisible by any number.

        if (num % i == 0)

        {

            temp++;

            break;

        }

        // incrementation

        i++;

    }

    // check for the value of temp and num.

    if (temp == 0 && num != 1)

    {

        printf("%d is a Prime Number", num);

    }

    else

    {

        printf("%d is Not a Prime Number", num);

    }
end=clock();
printf("\n starting time: %ld",start);
printf("\n end time: %ld", end);
total_cputime=((double)(end-start));
printf("\n total_cputime= %f",total_cputime);
total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
printf("\n total_cputime= %f",total_cputime);
return 0;
}