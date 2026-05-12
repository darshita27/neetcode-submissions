class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size(), maxWater=0;
        int lp=0, rp= n-1;
        for(int i=0;i<n;i++){
            int wid= rp-lp;
            int height= min(heights[lp], heights[rp]);
            int amt= wid*height;
            maxWater= max(maxWater, amt);
            heights[lp]<heights[rp]? lp++: rp--;
        }
        return maxWater;
    }
};
