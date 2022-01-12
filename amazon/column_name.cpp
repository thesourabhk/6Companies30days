class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string ans ="";
        while(n>0){
            ans = char('A'+((n-1)%26))+ans;
            n = (n-1)/26;
        }
        return ans;
    }
};
