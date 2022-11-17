#include<stdio.h>
void root(float n)
{
    float l = 0.0f;
    float r = n;
    for(int i=0;i<100;i++)
    {
        float m = (float)l + (float)(r - l) / (float)2.0f;
        if(m * m <= n) l = m;
        else r = m; 
    }
    printf("root of %f is %f" , n , l);
}
int main()
{
    float n; scanf("%f" , &n);
    root(n);
    return 0;
}