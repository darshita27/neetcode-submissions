class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n=arr.size();
        vector<int>res(n,1);
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(i!=j){
                    res[i]*= arr[j];
                }
            }
        }
        return res;
    }
};
