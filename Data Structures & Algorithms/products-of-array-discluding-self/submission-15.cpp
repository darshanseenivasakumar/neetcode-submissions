class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> arr(n);
        
        for(int i= 0;i<nums.size();i++){
            int prod = 1;
            for(int j= 0;j<nums.size();j++){
                if(i != j){
                    prod =prod*nums[j];
                }
            }
            arr[i] = prod;
        }
       
        
        return arr;
    }
};
