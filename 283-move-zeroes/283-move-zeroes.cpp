class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        if (len==0)  cout<<"0";
        int j = 0;
        for(int i=0; i<len; i++){
            if (nums[i]!=0){
                nums[j] = nums[i];
                j++;
            }
        }
        while(j<len){
            nums[j] = 0;
            j++;
        }
        for(int i=0; i<len; i++) cout<<nums[i];
    }
};