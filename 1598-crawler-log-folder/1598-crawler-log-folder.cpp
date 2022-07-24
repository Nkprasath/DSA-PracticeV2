class Solution {
public:
    int minOperations(vector<string>& logs) {
        int len = logs.size();
        stack<string> s;
        
        for(int i=0; i<len; i++){
            if(logs[i]=="./") continue;
            else if(logs[i]=="../") {
                if(s.empty()) continue;
                else s.pop();
            }
            else s.push(logs[i]);
        }
        return s.size();
    }
};