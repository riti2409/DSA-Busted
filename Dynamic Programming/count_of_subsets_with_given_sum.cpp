class Solution{
public:
int perfectSum(int arr[],int n, int sum) 
{ 
    // Your code goes here
    int[][] dp = new int[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        dp[i][0] = 1;
    }
    for(int i=1;i<sum+1;i++){
        dp[0][i] = 0;
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(j>=arr[i-1]){
                dp[i][j] = dp[i-1][j-arr[i-1]]%1000000007 + dp[i-1][j]%1000000007;
            }else{
                dp[i][j] = dp[i-1][j]%1000000007;
            }
        }
    }
    return dp[n][sum]%1000000007;
}
};