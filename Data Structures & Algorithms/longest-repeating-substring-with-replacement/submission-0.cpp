class Solution {
public:
    int characterReplacement(string s, int k) {
        int changes, maxLen=0;
      for(int i=0;i<s.size();i++){
        vector<int> freq(26, 0);
        int maxF=0;
        for(int j=i;j<s.size();j++){
            freq[s[j]-'A']++;
            maxF=max(maxF, freq[s[j]-'A']);
            changes= (j-i+1)-maxF;
            if(changes<=k){
                maxLen=max(maxLen, j-i+1);
            }else{
                break;
            }
        }
      }  
      return maxLen;
    }
};
