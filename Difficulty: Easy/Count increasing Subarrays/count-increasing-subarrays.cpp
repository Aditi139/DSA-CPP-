class Solution {
public:
    int countIncreasing(vector<int>& arr) {
        int n = arr.size();
        int len = 1;
        int ans = 0;

        for(int i = 1; i < n; i++) {
            if(arr[i] > arr[i-1]) {
                len++;
                ans += (len - 1);
            } else {
                len = 1;
            }
        }

        return ans;
    }
};