class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>st;
        for(int i=0;i<nums.size();i++){
            int compliment= target- nums[i];
            if(st.find(compliment)!= st.end()){
                return {st[compliment], i};
            }
            st[nums[i]]=i;
        }
        return {};
    }
};
