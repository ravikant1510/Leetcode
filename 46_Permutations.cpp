class Solution {
public:
    void getAllPermutation(int i,vector<int>& nums,vector<vector<int>> &res){
        int n = nums.size();
        if(i==n-1){
            res.push_back(nums);
            return;
        }
        if(i>=n)
            return;
        
        for(int k=i;k<n;k++){
            if(i==k){
                getAllPermutation(k+1,nums,res);
            }
            else{
                swap(nums[i],nums[k]);
                getAllPermutation(i+1,nums,res);
                swap(nums[i],nums[k]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        getAllPermutation(0,nums,res);
        return res;
    }
};