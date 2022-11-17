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
   
 
   int length=sizeof(arr)/sizeof(arr[0]);
   
   for(int i=0;i<n;i++){
         int count=1;
       for(int j=i+1;j<n;j++){
       if(arr[i]==arr[j]){
           count++;
           printf("%d ,%d\n",arr[j],count);
       }
       
      
   }
   }
   int maxelement;
int maxcount=0;
for(int i=0;i<n;i++){
    int count=1;
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
            if(maxcount<count){
                maxelement=arr[j];
            }
        }
    }
}
printf("\n Maximum Repeating Element : %d,%d",maxelement,maxcount);
    return 0;
}
