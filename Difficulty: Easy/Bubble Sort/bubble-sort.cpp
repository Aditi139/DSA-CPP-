class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        for(int i= 0; i<arr.size(); i++){
            
            bool swapped = false;
            
            for(int j= 0; j<arr.size()-i-1; j++){
                
                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    swapped=true;
                }
            }
            if(!swapped)
                break;
        }
        
    }
};