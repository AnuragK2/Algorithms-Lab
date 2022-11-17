//8.2
#include<stdio.h>
void swap(int *a, int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void heapify(int *arr,int size,int i)
{
    int LC=(2*i)+1, RC=(2*i)+2,MAX=i;
    if(LC<size && arr[LC]>arr[MAX])
      MAX=LC;
    if(RC<size && arr[RC]>arr[MAX])
      MAX=RC;
    if(MAX!=i) 
    {
     swap(&arr[MAX],&arr[i]);
     heapify(arr,size,MAX);
    }
}
void insert(int* arr,int size,int pos)//'insert' function(repeated insertion of array elements)
{
    int parent=0;
    if(pos%2==0)
    parent=(pos/2)-1;
    else
    parent=pos/2;
    if(arr[parent]<arr[pos])
    {
    swap(&arr[parent],&arr[pos]);
    insert(arr,size,parent);
    }  
}

void build_heap_bottom_down(int *arr,int size)//<--------------------MAX HEAP//
{
    for(int i=0;i<size;i++)
    {
    insert(arr,size,i);
    }
}
int maximum(int *arr)
{
    return arr[0];
}
int extract_maximum(int *arr,int size)//here heapify at root reqd r8??????
{
    int max=arr[0];
    swap(&arr[0],&arr[(size)-1]);
    (size)--;
    heapify(arr,(size),0);
    return max;
}
void increase_val(int *arr,int index,int val,int size)
{
    arr[index]=val;//<------inserted 
    insert(arr,size,index);//<------checking heap or not and modifying if it is not
}
void insert_val(int *arr,int val,int size)
{
 size++;
 insert(arr,size,val);
}
int main()
{
    int arr[9] = {15,12,10,18,14,19,199,13,8};
    int n=9;
    build_heap_bottom_down(arr,n);//<-------heap using repeated insertions
    printf("\n Max heap is\n");
    for(int i=0;i<n;i++)
      printf("%d, ",arr[i]);
   printf("\nmax element is %d\n", maximum(arr));
   
   printf("\nmax element is %d and maximum element is removed\n", extract_maximum(arr,n));
   printf("\nNew heap is(after extract_max())\n");
    for(int i=0;i<n-1;i++)
      printf("%d, ",arr[i]);
    int i=0,val=0;
    printf("\nENter index and val to enter ");
    scanf("%d %d",&i,val);
    increase_val(arr,i,val,n);
    printf("\nNew heap is(after inc_val()\n");
    for(int i=0;i<n;i++)
      printf("%d, ",arr[i]);
    insert_val(arr,val,n);  
    printf("\nNew heap is(after insert_val()\n");
    for(int i=0;i<n;i++)
      printf("%d, ",arr[i]);

}