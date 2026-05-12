class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int>prefProduct(n,1);
        vector<int>suffProduct(n,1);
        vector<int>res(n);
        for(int i=1;i<n;i++){
            prefProduct[0]=1;
            prefProduct[i]= prefProduct[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suffProduct[n-1]=1;
            suffProduct[i]= suffProduct[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            res[i]= prefProduct[i]* suffProduct[i];
        }
        return res;
    }
};
