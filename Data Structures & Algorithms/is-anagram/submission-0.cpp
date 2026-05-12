class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>mp1, mp2;;
        for(char i: s ) mp1[i]++;
        for(char j:t ) mp2[j]++;
        if(mp1== mp2) return true;
        return false;
    }
};
