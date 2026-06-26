class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int > arr2;
        int n= arr.size();
        
        int maxright = arr[n - 1];
        
        arr2.push_back(maxright);
        
        for(int i = n-2; i>=0; i--){
             if (arr[i] >= maxright) {
               maxright = arr[i]; 
               arr2.push_back(maxright); 
        }
        }
         reverse(arr2.begin(), arr2.end());
          return arr2; 
    }
};