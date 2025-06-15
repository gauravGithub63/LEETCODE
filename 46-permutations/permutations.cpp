class Solution {
public:
    void permut(vector<int> arr, vector<vector<int>>& ans,
                vector<bool>& visited, vector<int>& temp) {
        if (temp.size() == arr.size()) {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < arr.size(); i++) {
            if (!visited[i]) {
                visited[i] = 1;
                temp.push_back(arr[i]);
                permut(arr, ans, visited, temp) ;
                temp.pop_back();
                visited[i] = 0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        vector<bool> visited(nums.size(), 0);
        permut(nums, ans, visited, temp);
        return ans;
    }
};