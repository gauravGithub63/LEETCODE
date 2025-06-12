class Solution {
public:

void subsequence( vector<int>nums,vector<vector<int>>&ans,vector<int>temp,int index,int n)
{
    if(index==n){
    ans.push_back(temp);
    return ;
    }
    subsequence(nums,ans,temp, index+1, n);
    temp.push_back(nums[index]);
    subsequence(nums,ans,temp,index+1,n);

}
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<int>temp;
    vector<vector<int>>ans;
     subsequence( nums,ans,temp, 0,nums.size());
    return ans;

        
    }
};