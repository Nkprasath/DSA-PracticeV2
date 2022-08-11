class Solution(object):
    def minSubarray(self, nums, p):
        
        target = sum(nums)%p
    
        if target == 0:
            return 0
    
        dict1, running_sum, min_len = {0:-1}, 0, len(nums)
    
        for i in range(len(nums)):
            running_sum += nums[i]
        
            if (running_sum - target)%p in dict1:
                min_len = min(min_len, i - dict1[(running_sum - target)%p])
            
            dict1[running_sum%p] = i
        
        return min_len if min_len != len(nums) else -1
        