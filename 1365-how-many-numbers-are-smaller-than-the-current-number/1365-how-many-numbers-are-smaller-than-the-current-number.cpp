class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
	    // Vector to store the result
        vector<int>result;
        int n = nums.size();
		map<int,int>Freq;
		for(int i = 0 ; i < n; i++)
        {
            Freq[nums[i]]++;            
        }
		
        for(int i = 0 ; i < n ; i++)
        {
            int sum = 0;
            for(auto p: Freq)
            {
                if (p.first == nums[i])
                {
                    break;                    
                }
                sum += p.second;                
            }
            result.push_back(sum);            
        }
        return result;                    
    }
};