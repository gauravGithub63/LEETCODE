class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        int closest_sum = nums[0] + nums[1] + nums[2]; 
        int min_diff = abs(closest_sum - target);

        for (int i = 0; i < n - 2; ++i) {
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int current_diff = abs(sum - target);

                if (current_diff < min_diff) {
                    min_diff = current_diff;
                    closest_sum = sum;
                }

                if (sum == target) {
                    return target;
                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return closest_sum;
    }
};