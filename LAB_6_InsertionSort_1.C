#include<stdio.h>
#include<stdlib.h>
#include<time.h>

  int arr[10];
void asc_ins_sort(int *a,int size)//array
{
  for(int i=1;i<size;i++)
  {
      int temp=a[i],j=0;
      for(j=i-1;j>=0;j--)
      {
        if(a[j]>temp)
            a[j+1]=a[j];         
        else
            break;     
      }
      a[j+1]=temp;
  }

}

int main()//array main
{
    int n=0;
    clock_t start,end;
    double total_cputime;
    start=clock();
    printf("Enter n");
    scanf("%d",&n);
    while(1)
    {
        printf("\n1-best case\n2-average case\n3-Worst case\n4-Exit");
        int choice;
        scanf("%d",&n);
        if(choice==1)
        {
        for(int i=0;i<n;i++)
        arr[i]=10+i;
        }
        else if(choice==2)
        {
         for(int i=0;i<n;i++)
        arr[i]=rand()%11; 
        }
        else if(choice==3)
        {
        for(int i=0,p=999+n;i<n;i++,p--)
        arr[i]=p; 
        }
        else if(choice==4)
         return 0;
        asc_ins_sort(arr,n); 
        end=clock();
  total_cputime=((double)(end-start));
    //printf("\ntotal_cputime =%f",total_cputime);

    total_cputime=((double)(end-start))/CLOCKS_PER_SEC;//CONVERT TO TOTAL No of clk cycles to clk per seconds
    printf("\ntotal_cputime in second =%f",total_cputime);
    }
       
    
    
    
 
  return 0;
}