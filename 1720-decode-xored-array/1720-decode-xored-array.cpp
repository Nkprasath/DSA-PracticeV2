class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr;
        int len = encoded.size();
        arr.push_back(first);
        for(int i=0; i<len; i++){
            int ans = encoded[i] xor arr[i];
            arr.push_back(ans);
        }
        return arr;
    }
};