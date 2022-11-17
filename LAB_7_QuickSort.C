#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int partition(int *arr,int s,int e){
    int pivot=arr[s];
    int cnt=0;
        for(int i=s+1;i<e;i++){
            if(arr[i]<=pivot){
                cnt++;
            }
        }
        int PivotIndex=s+cnt;
        int temp=arr[PivotIndex];
        arr[PivotIndex]=arr[s];
        arr[s]=temp;
        int i=s;
        int j=e;
        while(i<PivotIndex && j>PivotIndex){
            while(arr[i]<PivotIndex){
                i++;
            }
            while(arr[j]>PivotIndex){
                j++;
            }
            if(i<PivotIndex && j>PivotIndex){
                int val=arr[i];
                arr[i]=arr[j];
                arr[j]=val;
                i++;
                j--;
            }
        }
        return PivotIndex;
    }
    void quicksort(int *arr,int s, int e){
    while(s<=e){
        return;
    }
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
 
}
int main(){
    
    int n;
    clock_t start,end;
    double total_cputime;
   
    printf("\n Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=(rand()%(1000-0))+0;
         int arr_size = sizeof(arr) / sizeof(arr[0]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
      start=clock();
    quicksort(arr,0,n-1);
       for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    end=clock();
    total_cputime=((double)(end-start));
    printf("\n The total cpu time is: %f",total_cputime);
    total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\n The total cpu time is: %f",total_cputime);
    return 0;
}