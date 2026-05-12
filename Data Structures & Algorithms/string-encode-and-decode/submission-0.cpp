class Solution {
public:
    string encode(vector<string>& strs) {
        string out;
        out.reserve(1024);
        for(auto &i:strs){
            out+= to_string(i.size());
            out.push_back('#');
            out+= i; 
        }
        return out;
    }

    vector<string> decode(string s) {
        int n= (int)s.size();
        vector<string>res;
        int i=0;
        while(i<n){
            int len=0;
            while(i<n && s[i]!='#'){
                len= len*10 + (s[i]-'0');
                ++i;
            }
            ++i;
            res.emplace_back(s.substr(i, len));
            i+=len;
        }
        return res;
    }
};
