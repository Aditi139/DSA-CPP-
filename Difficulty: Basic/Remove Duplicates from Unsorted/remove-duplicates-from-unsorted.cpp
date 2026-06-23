class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        vector<int> ans;
        unordered_set<int> s;
        
        for(int i = 0; i < arr.size(); i++) {
            if(s.find(arr[i]) == s.end()) {
                ans.push_back(arr[i]);
                s.insert(arr[i]);
            }
        }
        
        return ans;
    }
};