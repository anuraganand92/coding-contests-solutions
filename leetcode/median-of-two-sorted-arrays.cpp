class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        for(int i=0;i<nums1.size();i++)
            nums3.push_back(nums1[i]);
        for(int j=0;j<nums2.size();j++)
            nums3.push_back(nums2[j]);
        sort(nums3.begin(),nums3.end());

        double m,l,r;
        double result;

        m=nums3.size()/2.0;
        if (nums3.size() % 2 == 0) {
            result=(nums3[m-1]+nums3[m])/2.0;
        } else {
            result=nums3[m];
        }
        return result;
    }
};