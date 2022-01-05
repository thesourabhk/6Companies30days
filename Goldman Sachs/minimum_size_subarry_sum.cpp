
// sliding window method . :)
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int mn_len = INT_MAX;
        int i=0,j=0, sum=0;
        while(j<n){
            sum += nums[j];
            if(sum<target)
                j++;
            else{
                while(sum>=target){
                    mn_len= min(mn_len, (j-i+1));
                    sum -=nums[i++];
                }
                j++;    
            }
        }
        if(mn_len==INT_MAX)
            return 0;
        return mn_len;
    }
};

// binary search method . :)

class Solution {
public:
  int check(vector<int> nums, int len)
  {
    int ma = 0;
    int start = 0;
    int end = start + len - 1;
    for (int i = start; i <= end; ++i)
    {
      ma += nums[i];
    }
    int sum = ma;
    while (end < nums.size())
    {
      end++;
      if (end >= nums.size())
        break;
      sum -= nums[start++];
      sum += nums[end];
      ma = max(ma, sum);
    }
    return ma;
  }
  int minSubArrayLen(int s, vector<int>& nums) {
    int mi = 1;
    int ma = nums.size();
    int res = nums.size() + 1;
    // debug(check(nums, 2));
    while (mi <= ma)
    {
      int mid_size = (mi + ma) / 2;
      int sum = check(nums, mid_size);
      if (sum >= s)
      {
        ma = mid_size - 1;
        res = min(res, mid_size);
      }
      else
        mi = mid_size + 1;
    }
    return (res == nums.size() + 1) ? 0 : res;
  }
};
