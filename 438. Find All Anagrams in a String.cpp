class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        if(s.size() < p.size())
        {
            return ans;
        }
        for(auto ch:p)
        {
            v1[ch-'a']++;
        }
        int i=0, j=0;
        int n = s.size();
        while(j<n)
        {
            v2[s[j] - 'a']++;
            if(j-i+1 == p.size())
            {
                if(v1 == v2)
                {
                    ans.push_back(i);
                }
            }
            if(j-i+1 <p.size())
            {
                j++;
            }
            else
            {
                v2[s[i]-'a']--;
                i++;
                j++;
            }
            
        }
        return ans;
    }
};