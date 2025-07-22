class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> vec;
        int first = 0, second = 0;

        while (first < n && second < m) {
            if (nums1[first] < nums2[second]) {
                vec.push_back(nums1[first]);
                first++;
            } else {
                vec.push_back(nums2[second]);
                second++;
            }
        }

        while (first < n) {
            vec.push_back(nums1[first]);
            first++;
        }

        while (second < m) {
            vec.push_back(nums2[second]);
            second++;
        }

        int total = n + m;
        if (total == 0) return 0;

        if (total % 2 == 0) {
            int mid = total / 2;
            return (vec[mid] + vec[mid - 1]) / 2.0;
        } else {
            return vec[total / 2];
        }
    }
};
