class Solution {
public:
    int maxArea(vector<int>& height) {
        int first = 0;
        int last = height.size() - 1;
        int area = 0;

        while (first < last) {
            int h = min(height[first], height[last]);
            int w = last - first;
            area = max(area, h * w);

            // Move the shorter line
            if (height[first] < height[last]) {
                first++;
            } else {
                last--;
            }
        }

        return area;
    }
};
