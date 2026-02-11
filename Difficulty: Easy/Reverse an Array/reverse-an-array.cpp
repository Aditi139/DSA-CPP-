class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int st = 0;
        int end = arr.size()-1;

        while (st < end) {
            swap(arr[st], arr[end]);
            st++;
            end--;
        }
    }
};
// class Solution {
//   public:
//     void reverseArray(vector<int> &arr) {
//         int n = arr.size();
//         for (int i = 0; i < n / 2; i++) {
//             swap(arr[i], arr[n - 1 - i]);
//         }
//     }
// };
