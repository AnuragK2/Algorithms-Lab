#include<stdio.h>
int dp[1001][1001];
int max(int a , int b)
{
    if(a > b) return a;
    return b;
}
int solve(char* s1 , int sz1 , char* s2 , int sz2 , int i , int j)
{
    if(i == sz1 || j == sz2)
    return 0;
    if(dp[i][j] != -1) 
    return dp[i][j];
    int ans = 0;
    if(s1[i] == s2[j]) 
    ans = solve(s1 , sz1 , s2 , sz2 , i + 1 , j + 1) + 1;
    else
    {
        ans = solve(s1 , sz1 , s2 , sz2 , i + 1 , j);
        ans = max(ans , solve(s1 , sz1 , s2 , sz2 , i , j + 1));
    }
    return dp[i][j] = ans;
}
int main()
{
    char* s1 = "ABBCDAB";
    char* s2 = "BCADB";
    int sz1 = 7 , sz2 = 5;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<6;j++) dp[i][j] = -1;
    }
    printf("LCS: %d" , solve(s1 , sz1 , s2 , sz2 , 0 , 0));
    
}
