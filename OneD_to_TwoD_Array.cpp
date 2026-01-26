#include<iostream>
using namespace std;
int main(){

    int arr1[12];
    int arr2[3][4];

    for(int i=0; i<12; i++){

        cin>>arr1[i];
    }

    for(int i=0; i<3; i++){

        for(int j=0; j<4; j++){

            arr2[i][j]=arr1[i*4+j];
        }
    }
    for(int i=0; i<3; i++){

        for(int j=0; j<4; j++){

                cout<<arr2[i][j];
        }

        cout<<endl;
    }
  return 0;
}
