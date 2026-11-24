class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp=height.size()-1;
        int current_Max,w,ht;
        int Max_Water=0;
        while(rp>lp){
            w=rp-lp;
            ht=min(height[rp],height[lp]);
            current_Max=w*ht;
            Max_Water=max(current_Max,Max_Water);
            height[rp]>height[lp]?lp++:rp--;
        }return Max_Water;
    }
};