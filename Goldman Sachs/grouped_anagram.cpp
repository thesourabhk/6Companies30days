// Here we are first sorting the string from the array ans the checking i any other similar string is present or not.
// if present add it to the string array other wise create a new one...:)
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(int i=0;i<string_list.size();i++){
            string s = string_list[i];
            sort(s.begin(), s.end());
            if(!(mp.find(s) != mp.end())){
                mp[s]= {};
            }
            mp[s].push_back(string_list[i]);
        }
        for(auto x: mp){
            auto n = x.second;
            ans.push_back(n);
        }
        return ans;
    }
};
