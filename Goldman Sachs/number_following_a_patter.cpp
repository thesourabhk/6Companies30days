// first we store the number in the stack if it is a 'D' else we store and the pop them one by one to store them into the string. :)

class Solution{   
public:
    string printMinNumberForPattern(string s){
        // code here 
        stack<int> st;
        int num=1;
        string ans="";
        for(int i=0;i<(int)s.length();i++){
            if(s[i]=='D'){
                st.push(num++);
            }
            else{
                st.push(num++);
                while(!st.empty()){
                    ans+=to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(num);
        while(!st.empty()){
            ans+=to_string(st.top());
                st.pop();
        }
        return ans;
    }
};
