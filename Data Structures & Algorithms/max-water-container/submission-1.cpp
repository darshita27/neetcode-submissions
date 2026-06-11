class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater=0,lp=0,n=heights.size(), hp=n-1, area;
        for(int i=0;i<n;i++){
            int width= hp-lp;
            int maxheight= min(heights[lp], heights[hp]);
            area= width*maxheight;
            maxwater= max(area, maxwater);
            heights[lp]<heights[hp]? lp++:hp--;
        }
        return maxwater;
    }
};
