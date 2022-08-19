class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int n = d.size()-1;
        if(d[n]!=9) d[n]++;
        else{
            while(n>=0 and d[n]==9){
                d[n] = 0;
                n--;
            }
            if(n<0) d.insert(d.begin(),1);
            else d[n]++;
        }
        return d;
    }
};