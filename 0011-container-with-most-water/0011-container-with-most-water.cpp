class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0;
        int i=0, j=height.size()-1;
        int area = 0;
        while(i<j){
            area = (j-i)*min(height[i], height[j]);
            maxi = max(maxi, area);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxi;
    }
};