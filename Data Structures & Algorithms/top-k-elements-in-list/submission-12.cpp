class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> maps;
        for(int i : nums){
            maps[i]++;
        }
        vector<pair<int,int>> ans;
        for(auto &i :maps){
            ans.push_back({i.second,i.first});
        }
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        vector <int> ans1;

        for(int i =0;i<k;i++){
            ans1.push_back(ans[i].second);
        }
        return ans1;
       
    }
};
