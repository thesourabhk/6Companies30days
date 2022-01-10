class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        // your code here
        int dp[m+1];
        dp[0]=1;
        dp[1]=1;
        if(m <2){
            return dp[m];
        }
        for(int i=2;i<m+1;i++){
            dp[i]= 1+dp[i-2];
        }
        return dp[m];
        
    }
};
