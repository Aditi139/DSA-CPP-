class Solution {
public:
    int removeElement(vector<int>& a, int v) {
        int idx = 0;
        
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != v) {
                a[idx] = a[i];
                idx++;
            }
        }
        return idx;
    }
};
