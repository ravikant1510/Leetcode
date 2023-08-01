class Solution {
public: 
    void helper(int n,int k,int i,vector<vector<int>> &res,vector<int> &vec){
        if(k==0){
            res.push_back(vec);
            return;
        }
        if(i>n)
            return;
        vec.push_back(i);
        helper(n,k-1,i+1,res,vec);
        vec.pop_back();
        helper(n,k,i+1,res,vec);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> tem;
        helper(n,k,1,res,tem);
        return res;
    }
};