class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> hashed(nums.begin(),nums.end());
       int n = nums.size();
        int m = hashed.size();
        if(n == m){
            return false;
        }
        return true;
      
    }
};