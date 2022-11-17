#include<stdio.h>
#include<time.h>
int main()
{
    int n;
    scanf("%d" , &n);
    int arr[n];
    int choice = 0;
    clock_t start, end;
    double total_cputime;
    while(1)
    {
        printf("enter choice: ");
        scanf("%d" , &choice);
        if(choice == 0) return 0;
        else if(choice == 1) for(int i=0;i<n;i++) arr[i] = rand() % 100;
        else if(choice == 2)
        {
            for(int i=0;i<n;i++) printf("%d " , arr[i]);
            printf("\n");
        }
        else if(choice == 3)
        {
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[i] > arr[j])
                    {
                        arr[i] ^= arr[j];
                        arr[j] ^= arr[i];
                        arr[i] ^= arr[j];
                    }
                }
            }
        }
        else if(choice == 4)
        {
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[i] < arr[j])
                    {
                        arr[i] ^= arr[j];
                        arr[j] ^= arr[i];
                        arr[i] ^= arr[j];
                    }
                }
            }
        }
        else if(choice == 5)
        {
            start = clock();
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[i] > arr[j])
                    {
                        arr[i] ^= arr[j];
                        arr[j] ^= arr[i];
                        arr[i] ^= arr[j];
                    }
                }
            }
            end = clock();
            printf("\nstarting time=%ld", start);
            printf("\nEnd time =%ld", end);
            total_cputime = ((double)(end - start));
            printf("\ntotal_cputime =%f", total_cputime);
            total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("\ntotal_cputime in second =%f", total_cputime);
        }
        else if(choice == 6)
        {
            start = clock();
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[i] > arr[j])
                    {
                        arr[i] ^= arr[j];
                        arr[j] ^= arr[i];
                        arr[i] ^= arr[j];
                    }
                }
            }
            end = clock();
            printf("\nstarting time=%ld", start);
            printf("\nEnd time =%ld", end);
            total_cputime = ((double)(end - start));
            printf("\ntotal_cputime =%f", total_cputime);
            total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("\ntotal_cputime in second =%f", total_cputime);
        }
        else if(choice == 7)
        {
            start = clock();
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[i] > arr[j])
                    {
                        arr[i] ^= arr[j];
                        arr[j] ^= arr[i];
                        arr[i] ^= arr[j];
                    }
                }
            }
            end = clock();
            printf("\nstarting time=%ld", start);
            printf("\nEnd time =%ld", end);
            total_cputime = ((double)(end - start));
            printf("\ntotal_cputime =%f", total_cputime);
            total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("\ntotal_cputime in second =%f", total_cputime);
        }
        else if(choice == 8) printf("do this on pen and paper\n");
        else printf("enter valid choice\n"); 
    }
    return 0;
}