class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        vector<int>arr(26,0);
        for(char i: s){
            arr[i-'a']++;
        }
        for(char j:t){
            arr[j-'a']--;
        }
        for(int i:arr){
            if(i!=0) return false;
        }
        return true;
    }
};
