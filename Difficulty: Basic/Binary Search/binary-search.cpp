class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int left =0, right=arr.size()-1;
        
        while(left<=right){
            int mid = left +(right- left)/2;
            
            if(arr[mid]==k){
                return true;
            }
            else if(arr[mid] < k){
                left = mid + 1;
            }
            else if(arr[mid] > k){
                right = mid - 1;
            }
            
            
        }
        return false;
    }
};