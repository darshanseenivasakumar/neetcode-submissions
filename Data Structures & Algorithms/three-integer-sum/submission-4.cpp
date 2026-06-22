class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        vector<vector<int>> res1;
        if(nums.size() == 0){
            return {};
        }
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            int f = i+1; int e = nums.size()-1;
            while(f<e){
                int sum = nums[i]+nums[f]+nums[e];
                if(sum==0){
                    res.insert({nums[i],nums[f],nums[e]});
                    f++;e--;
                }
                else if(sum<0){
                    f++;
                }
                else{
                    e--;
                }
            }
        }
        for(auto &i : res){
            res1.push_back({i});
        }
        return res1;
    }
};
