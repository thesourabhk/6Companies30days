class Solution 
{
	public:
		string FirstNonRepeating(string A){
		 string s = "" ; 
		 // non repeating characters queue
        queue<char> q; 
        int n = A.length() ;
        
        vector<int> used(26, false);


        for(int i = 0; i < n ; ++i) {
            char c = A[i] , output;
            
            if(used[c - 'a'] < 1) 
            {
                q.push(c);
            }
            ++used[c - 'a'];

            while(!q.empty() and  used[q.front() - 'a'] > 1)
            {
                q.pop();
            }

            if(q.empty()) {
                output = '#';
            }
            else {
                output = q.front();
            }
            s += output;
        }
		    
	
		    return s ;
		}

};
