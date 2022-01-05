// min heap is used to store the k largest elements in an array and then return it with the help of a vector. :)
class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int> ans;
        priority_queue<int, vector<int>, greater<int>> minheap;
        for(int i=0;i<n;i++){
            minheap.push(arr[i]);
            if(minheap.size()>k)
                minheap.pop();
        }
        while(!minheap.empty()){
            ans.push_back(minheap.top());
            minheap.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
