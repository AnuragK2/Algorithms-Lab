#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int gcd(int a,int b){
if(b==0){
return a;
return gcd(b,a%b);
}
}
int main(){
int a,b;
clock_t start,end;
double total_cputime;
start=clock();

printf("\n enter the number a: ");
scanf("%d",&a);
printf("\n enter the number b: ");
scanf("%d",&b);
int res=gcd(a,b);
printf("\n GCD of a and b is: %d", res);
end=clock();
printf("\n starting time is= %ld",start);
printf("\n end time is= %ld",end);
total_cputime=((double)(end-start));
printf("\n total_cputime=%f",total_cputime);
total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
printf("\n total_cputime in second=%f",total_cputime);
return 0;

}