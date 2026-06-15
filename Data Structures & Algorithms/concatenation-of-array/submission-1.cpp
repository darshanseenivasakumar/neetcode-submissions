class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> mainlist;
        for(int i = 0;i<nums.size();i++){
            mainlist.push_back(nums[i]);
        }
        for(int i = 0;i<nums.size();i++){
            mainlist.push_back(nums[i]);
        }
        return mainlist;
    }
};