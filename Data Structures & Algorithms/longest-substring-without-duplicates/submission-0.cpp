class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        unordered_set<char> window;
        int maxlen = 0;


        for (int i=0; i < s.size(); i++)
        {

            while (window.count(s[i])) 
            {
                window.erase(s[l]);
                l++;
            }
            window.insert(s[i]);
            maxlen = max(maxlen, i-l+1);

        }
        
        return maxlen;
        
    }
};
