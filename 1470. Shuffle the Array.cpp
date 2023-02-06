//o(n) space solution and o(n) T.C.
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        for(int i=0; i<n; i++)
        {
            ans.push_back(nums[i]);
            if(i+n <nums.size())
            {
                ans.push_back(nums[i+n]);
            }
        }
        return ans;
    }
};
//optimized o(1) space and o(n) T.C.
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        for(int i=0; i<nums.size(); i++)
        {
            int currNum = nums[i];
            int currPos = i;
            while(currNum>0)
            {
                int newPos;
                if(currPos<n)
                {
                   newPos = 2*currPos; 
                }
                else
                {
                    newPos = 2*(currPos -n)+1;
                }
                int newNum = nums[newPos];
                nums[newPos] = -currNum;
                currPos = newPos;
                currNum =newNum;
            }
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] < 0)
                nums[i]= -nums[i];
        }
        return nums;
    }
};
