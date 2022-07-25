class Solution {
public:
    string longestPalindrome(string s) {
        
        
        bool palindrome[s.size()]; 
        int maxLen = -1;
        int maxStart;
        
        bool prev,current;
        
        for(int i=s.size()-1;i>=0;i--)
        {
            for(int j=i; j<s.size(); j++)
            {
                int len = j-i+1;
                
                if(len<=2) current = (s[i]==s[j]);    //combines both base cases
                
                else 
                    current = ( s[i]==s[j] && palindrome[j-1]);
                 
                if(len!=1) palindrome[j-1] = prev;     
                
                if(current && len>maxLen)
                {
                    maxLen = len;
                    maxStart = i;
                }
                
                prev = current;
            }
        }
        
        return s.substr(maxStart,maxLen);
        
        
        
    }
};
