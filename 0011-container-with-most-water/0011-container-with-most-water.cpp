class Solution {
public:
    int maxArea(vector<int>& height) {
        //int area =0;
        int start=0;
        int end =height.size()-1;
            int max_area=0;
        while(start<end){
             int area=(end-start)*min(height[end], height[start]);
             max_area= max(area,max_area);
            if(height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return max_area;
    }
};