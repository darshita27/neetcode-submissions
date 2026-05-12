class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<int>st;
        int start=0, end=0, maxLen=0;
        while(end<s.length()){
            if(st.find(s[end])==st.end()){
                st.insert(s[end]);
                maxLen= max(maxLen, end-start+1);
                end++;
            }else{
                st.erase(s[start]);
                start++;
            }
        }
        return maxLen;
    }
};
