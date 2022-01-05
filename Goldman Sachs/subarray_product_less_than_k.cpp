// its a sliding window concept with variable wndow size. check if the product is greater than k then remove from the start else store the size of the subarray. :)

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long p =1;
        int res=0;
        for(int start =0,end=0;end<n;end++){
            p *= a[end];
            while(start<end and p>=k)
                p /= a[start++];
            if(p<k)
            {
                int len = end-start+1;
                res += len;
            }
        }
        return res;
        
    }
};
