// Final function implementation
class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        // code here
          int good = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= k)
            good++;
    }

    if (good == 0 || good == arr.size())
        return 0;

    int bad = 0;
    for (int i = 0; i < good; i++) {
        if (arr[i] > k)
            bad++;
    }

    int ans = bad;

    for (int i = good; i < arr.size(); i++) {
        if (arr[i] > k)
            bad++;
        if (arr[i - good] > k)
            bad--;

        ans = min(ans, bad);
    }

    return ans;
    }
};
