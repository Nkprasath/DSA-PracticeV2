class Solution {
public:
    int xorOperation(int n, int start) {
        int i = 1, res = start;
        while(i < n) res ^= (start + 2 * i++);
        return res;
    }
};