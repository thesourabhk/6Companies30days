class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int ans =0;
        for(int i=1;i<n-1;i++){
            if((arr[i]>arr[i-1]) and (arr[i]>arr[i+1])){
                int start =i;
                int end =i;
                while(start>0 and arr[start]>arr[start-1])
                    start--;
                while(end<n-1 and arr[end]>arr[end+1])
                    end++;
                ans = max(ans, (end-start+1));
                i=end;
            }
        }
        return ans;
    }
};

