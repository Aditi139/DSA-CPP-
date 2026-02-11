class Solution {
public:
    int binarySearch(int x, vector<int>& arr, bool findFirst) {
        
        int low = 0, high = arr.size() - 1;
        
        int ans = -1;

        while (low <= high) {
            
            int mid = low + (high - low) / 2;

            if (arr[mid] == x) {
                
                ans = mid;
                
                if (findFirst)
                
                    high = mid - 1;
                    
                else
                
                    low = mid + 1;
            }
            else if (arr[mid] < x) {
                
                low = mid + 1;
            }
            
            else {
                
                high = mid - 1;
            }
        }
        return ans;
    }

    vector<int> firstAndLast(int x, vector<int> &arr) {
        
        int first = binarySearch(x, arr, true);
        
        if (first == -1)
            return {-1};

        int last = binarySearch(x, arr, false);
        
        return {first, last};
    }
};




// class Solution {
//   public:
//     vector<int> firstAndLast(int x, vector<int> &arr) {
//         // Code here
//           int n = arr.size();
//         int first = -1, last = -1;

//         int low = 0, high = n - 1;
        
//         while (low <= high) {
            
//             int mid = low + (high - low) / 2;
            
//             if (arr[mid] == x) {
                
//                 first = mid;
                
//                 high = mid - 1;
                
//             } else if (arr[mid] < x) {
                
//                 low = mid + 1;
                
//             } else {
//                 high = mid - 1;
//             }
//         }

//         low = 0; high = n - 1;
        
//         while (low <= high) {
            
//             int mid = low + (high - low) / 2;
            
//             if (arr[mid] == x) {
                
//                 last = mid;
//                 low = mid + 1;
                
//             } else if (arr[mid] < x) {
                
//                 low = mid + 1;
//             } else {
                
//                 high = mid - 1;
//             }
//         }

//         if (first == -1)
//             return {-1};

//         return {first, last};
        
//     }
// };