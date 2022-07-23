class Solution {
public:
    int maxDepth(string str) {
        int count=0;
        stack<int> s;
        int len=str.length();
        
        for(int i=0; i<len; i++){
            if(str[i]=='(') s.push(str[i]);
            else if(str[i]==')'){
                if(count<s.size()) count = s.size();
                s.pop();
            }
        }
        return count;
    }
};