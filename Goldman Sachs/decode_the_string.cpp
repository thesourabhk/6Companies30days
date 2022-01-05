// extensive resursion method to find the end bracket the move back the make the decoded string. :)
class Solution{
        string decode(string &s, int &i){
        string ans;
        while(i< s.length() && s[i] != ']'){
            if(isdigit(s[i])){
                int k =0;
                while(i< s.length() && isdigit(s[i]))
                    k = k*10 + s[i++]-'0';
                i++;
                string r = decode(s,i);
                while(k-- >0)
                    ans += r;
                i++;
            }
            else
                ans += s[i++];
        }
        return ans;
    }
public:
    string decodedString(string s){
        // code here
        int i=0;
        return decode(s, i);
    }
};
