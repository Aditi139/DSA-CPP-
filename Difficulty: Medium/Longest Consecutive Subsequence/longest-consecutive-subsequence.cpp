class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        if(arr.empty())
            return 0;
            
           sort(arr.begin(), arr.end()) ;
           
            int count=1, res=1;
            
        for(int i=01; i<arr.size(); i++){
            
           if(arr[i] ==  arr[i-1])
            continue;
            
           
        if(arr[i] == arr[i-1]+1){
            count++;
        }
          else{
              count=1;
          } 
          res = max(res, count);
        }
          return res;

            }
};