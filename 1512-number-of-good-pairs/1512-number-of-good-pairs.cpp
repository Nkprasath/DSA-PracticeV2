class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        int count=0;
        for(auto &num:nums){
            if(m[num]!=0) count+=m[num];
            m[num]++;
        }
        return count;
    }
};