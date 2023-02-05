class Solution {
public:
    unordered_map<char, int>mp;
    bool compare(string &first, string &second)
    {
        int n = first.size();
        int m = second.size();
        for(int i=0; i<min(n,m); i++)
        {
           if(mp[first[i]] < mp[second[i]]) 
           {
               return true;
           }
           if(mp[first[i]] > mp[second[i]])
           {
               return false;
           }
        }
        if(m>=n)
            return true;
        else
            return false;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i=0; i<order.size(); i++)
        {
            mp[order[i]] = i;// storing priority of chars according to order dict
            
        }
        int n = words.size();
        for(int i=0; i<n-1; i++)
        {
            if(!compare(words[i], words[i+1]))
                return false;
        }
        return true;
        
    }
};
