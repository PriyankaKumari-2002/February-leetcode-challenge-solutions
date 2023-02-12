class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans = 0;
        unordered_map<int, int>mp;
        int i=0, j=0;
        int n = fruits.size();
        while(j<n) // j== right pointerand i is left pointer
        {
            mp[fruits[j]]++;
            while(mp.size() >2)
            {
                if(mp[fruits[i]] == 1)
                {
                    mp.erase(fruits[i]);
                }
                else
                {
                    mp[fruits[i]]--;
                }
                i++;
            }
            ans=max(j-i+1, ans);
            j++;
        }
      return ans;  
    }
};
