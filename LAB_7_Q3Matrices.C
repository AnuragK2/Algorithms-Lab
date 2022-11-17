#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    float arr[n][n];
    int ans[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%f", &arr[i][j]);
            ans[i][j] = arr[i][j];
        }
    }
    float rsum[n];
    float csum[n];
    for(int i=0; i<n; i++)
    {
        rsum[i] = 0.0f;
        for(int j=0; j<n; j++)
        {
            rsum[i] += arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        csum[i] = 0.0f;
        for(int j=0; j<n; j++)
        {
            csum[i] += arr[j][i];
        }
    }
    int ans_rsum[n];
    int ans_csum[n];
    for(int i=0; i<n; i++)
    {
        ans_rsum[i] = 0;
        for(int j=0; j<n; j++)
        {
            ans_rsum[i] += ans[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        ans_csum[i] = 0;
        for(int j=0; j<n; j++)
        {
            ans_csum[i] += ans[j][i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ans_rsum[i] < rsum[i] && ans_csum[j] < csum[j])
            {
                ans[i][j]++;
                ans_rsum[i]++;
                ans_csum[j]++;
            } 
        }         
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }    
    return 0;
}
// 4
// 10.9 2.5 1.3 9.3
// 3.8 9.2 2.2 11.8
// 7.9 5.2 7.3 0.6
// 3.4 13.1 1.2 6.3
