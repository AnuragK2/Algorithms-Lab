#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
   int arr[n];
   printf("\n Input elements of an array:");
   for(int i=0;i<n;i++){
       
       scanf("%d",&arr[i]);
   }
   printf("\n Elements in array are: ");
   for(int i=0;i<n;i++){
       printf("%d",arr[i]);
   }
   printf("\n");
   int large=arr[0];
   int small=arr[0];
   for(int i=1;i<n;i++){
       if(arr[i]>large)
       large=arr[i];
       if(arr[i]<small)
       small=arr[i];
   }
   printf("Smallest element is: %d",small);
   printf("\n Largest element is: %d",large);
   
    return 0;
}
