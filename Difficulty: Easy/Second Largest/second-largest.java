class Solution {
    public int getSecondLargest(int[] arr) {
        int lar = -1;
        int secLar = -1;

        for (int i = 0; i < arr.length; i++) {
            
            if (arr[i] > lar) {
                secLar = lar;
                lar = arr[i];
            } 
            else if (arr[i] < lar && arr[i] > secLar) {
                secLar = arr[i];
            }
        }

        return secLar;
    }
}

        
