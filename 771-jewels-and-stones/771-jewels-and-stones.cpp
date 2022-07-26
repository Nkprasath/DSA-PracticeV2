class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
       
        unordered_map<char,int> mp;
        for(int i=0; i<stones.size(); i++)
            mp[stones[i]]++;
        
        int cnt = 0;
        for(int i=0; i<jewels.size(); i++)
            if(mp.find(jewels[i]) != mp.end())
                cnt += mp[jewels[i]];
        
        return cnt;
        
    }
};