class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int i=0, j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] < nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        for(i; i<nums1.size(); i++) v.push_back(nums1[i]);
        for(j; j<nums2.size(); j++) v.push_back(nums2[j]);
        int n = v.size();
        int mid = v.size()/2;
        if(n%2 == 0){
            return ((double)(v[mid]+v[mid-1])/2);
        }else{
            return v[mid];
        }
    }
};