class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxarea=0;
        while(left<right){
            int h=height[left]<height[right]?height[left]:height[right];
            int area=h*abs(right-left);
            if(area>maxarea)maxarea=area;
            if(height[left]>height[right])right--;
            else{left++;}
        }
        return maxarea;
    }
};