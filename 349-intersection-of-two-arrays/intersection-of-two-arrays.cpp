class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        unordered_set<int> s1, s2;
        
        for (int x : a) {
            s1.insert(x);
        }

        for (int y : b) {
            if (s1.find(y) != s1.end()) {
                s2.insert(y);
            }
        }

        vector<int> ans;
        for (int v : s2) {
            ans.push_back(v);
        }

        return ans;
    }
};
