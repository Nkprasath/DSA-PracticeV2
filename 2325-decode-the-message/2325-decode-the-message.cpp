class Solution {
public:
    string decodeMessage(string key, string message) {
        
        int n = key.size();
        
        // store the substitution
        
        unordered_map<char, char> mp;
        
        char ch = 'a';
        
        for(int i = 0; i < n; i++)
        {
            if(key[i] == ' ' || mp.count(key[i]))
            {
                continue;
            }
            
            mp[key[i]] = ch;
            
            ch++;
        }
        
        // decode the message
        
        for(int i = 0; i < message.size(); i++)
        {
            if(message[i] == ' ')
                continue;
            
            message[i] = mp[message[i]];
        }
        
        return message;
    }
};