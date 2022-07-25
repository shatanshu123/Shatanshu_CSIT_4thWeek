class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.length();
        unordered_map<string,int>mp;
        vector<string>ans;
        for(int i=0;i<=n-10;i++)
        {
            string temp = s.substr(i,10);
            if(mp.find(temp)==mp.end())
                mp[temp]=1;
            else if(mp[temp]>1)
                continue;
            else
            {
                mp[temp]++;
                ans.push_back(temp);
            }
        }
        return ans;
        
    }
};





