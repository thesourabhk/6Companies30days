// yet another slidng window problem with fixed window size. ;) 
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n = nums.size();
        if(n&1)
            return false;
        vector<int> mod(k,0);
        for(int i=0;i<nums.size();i++){
            mod[nums[i]%k]++;
        }
        if(mod[0]&1){
            return false;
        }
        int i=1,j=k-1;
        while(i<j){
            if(mod[i]!=mod[j]){
                return false;
            }
            i++;
            j--;
        }
        if(i==j && mod[i]&1){
            return false;
        }
        return true;
    }
};
