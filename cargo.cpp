class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.size() == 0)
            return 0;
        int low = 0; int high = 0;
        
        int n = s.size();
        vector<int>pos(256,-1);
        int ans = 0;
        while(high < n){
            
            int ch = s[high];
            
            if(pos[ch] > -1 && low <= pos[ch]){
                low = pos[ch]+1;
            }
            ans = max(ans,high-low+1);
            pos[ch] = high;
            high++;
        }
        return ans;
    }
};
