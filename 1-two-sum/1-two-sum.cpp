class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Two-pointers
        vector<int> temp (nums.begin(), nums.end());
        vector<int> res(2);
        sort(nums.begin(), nums.end());
        int n=size(nums), lo=0, hi=n-1;
        while(lo < hi)
        {
            int sum = nums.at(lo) + nums.at(hi);
            if(sum == target)
            {
                res = {nums[lo], nums[hi]};
                break;
            }
            else if(sum>target) hi--;
            else lo++;
        }
        
		//Iterate through to find first index
        for(int i=0; i<n; i++)
        {
            if(res.at(0) == temp.at(i)) {
                res[0] = i;
                break;
            }
        }
		//Iterate through to find second index
        for(int i=0; i<n; i++)
        {
            if(i!=res[0] && res.at(1) == temp.at(i)){    
                res[1] = i;
                break;
            }
        }
        return res;
    }
};