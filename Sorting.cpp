#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];


    //Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
      
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
      
        swap(arr[i], arr[minIndex]);
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
}
 cout<<endl;
  
  //bubble sort
  for(int i=0; i<n; i++){

        bool swapped = false;

        for(int j=0; j<n-i-1; j++){

            if(arr[j] > arr[j+1]){

                swap(arr[j], arr[j+1]);

                swapped = true;

            }
        }
        if(!swapped){
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }



  return 0;
}
