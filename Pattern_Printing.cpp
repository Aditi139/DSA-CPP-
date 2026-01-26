#include<iostream>
using namespace std;

int main(){

// right half pyramid

for (int i=1; i<=5; i++){

    for(int j=1; j<=i; j++){

        cout<<"*";
    }

    cout<<endl;
}



//inverted right half pyramid

for(int i=5; i>=1; i--){

    for(int j=i; j>=1; j--){

        cout<<"*";
    }
    cout<<endl;
}


// print left half pyramid

for(int i=1; i<=5; i++){

    for(int j=1; j<=5-i; j++){

        cout<<" ";
    }

    for(int j=1; j<=i; j++){
        cout<<"*";
    }
    cout<<endl;
}


//  inverted left half pyramid

for(int i=5; i>=1; i--){

    for(int j=5-i; j>=1; j--){
        cout<<" ";
    }

    for(int j=i; j>=1; j--){
        cout<<"*";
    }
   cout<<endl;
}


// full pyramid

 for(int i=1; i<=5;i++){

    for(int j=1; j<=5-i; j++){
        cout<<" ";
    }

    for(int j=1; j<=2*i-1; j++){
        cout<<"*";
    }
    cout<<endl;
 }


// full inverted pyramid

for(int i=5; i>=1; i--){
    for(int j=5-i; j>=1; j--){
        cout<<" ";
    }
    for( int j=2*i-1; j>=1; j--){
        cout<<"*";
    }
    cout<<endl;
}

//Half Dimond

for(int i=1; i<=5; i++){

    for(int j=1; j<=i; j++){
        cout<<"*";
    }
    cout<<endl;
}

for(int i=4; i>=1; i--){

    for(int j=i; j>=1; j--){
        cout<<"*";
    }
    cout<<endl;
}


return 0;
}
