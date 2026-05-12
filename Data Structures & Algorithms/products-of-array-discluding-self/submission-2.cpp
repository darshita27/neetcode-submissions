class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>preff(n,1),suffix(n,1);
        vector<int>ans(n);
        preff[0]=1;
        for(int i=1;i<n;i++){
            preff[i]= nums[i-1]*preff[i-1];
        }
        suffix[n-1]=1;
        for(int i=n-2;i>=0;i--){
            suffix[i]= suffix[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]= preff[i]*suffix[i];
        }
        return ans;
    }
};
