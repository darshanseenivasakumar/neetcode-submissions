class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       vector<int> arr2;
       for(int i = 0;i<arr.size();i++){
        int current = -1;
        for(int j = i+1;j<arr.size();j++){
            if(arr[j]>current){
                current = arr[j];
            }
        }
        arr2.push_back(current);
       }
       
       return arr2;
    }
};