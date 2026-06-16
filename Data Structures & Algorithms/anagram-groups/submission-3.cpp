class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> maps;
       vector<vector<string>> res;
       for(string s : strs){
            string Sorteds = s;
            sort(Sorteds.begin(),Sorteds.end());
            maps[Sorteds].push_back(s);
       }
       for(auto &x : maps){
            res.push_back(x.second);
       }
       return res;

    }
};
