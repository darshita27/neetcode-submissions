class Solution {
public:
    string minWindow(string s, string t) {
       vector<int>hash(256,0);
        int l=0, r=0, minlen=INT_MAX, SIndex=-1, cnt=0;
        int m=t.size(), n=s.size();
        for(char c:t){
            hash[c]++;
        }
        while(r<n){
            if(hash[s[r]]>0){
                cnt++;
            }
            hash[s[r]]--;
            r++;
            while(cnt==m){
                if(r-l <minlen){
                   minlen=r-l;
                   SIndex=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0){
                cnt--;
                }
                l++;
            }
        }
        return SIndex== -1? "": s.substr(SIndex, minlen); 
    }
};
