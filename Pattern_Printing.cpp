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

    for(int j=1; j<=i; j++){

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

    for(int j=1; j<=5-i; j++){
        cout<<" ";
    }

    for(int j=1; j<=i; j++){
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

//Half Diamond

int n=5;
for(int i=1; i<=n; i++){
    
    for(int j=1; j<=i; j++){
        cout<<"*";
    }
    cout<<endl;
}
    
for(int i=n-1; i>=1; i--){
    
    for(int j=1; j<=i; j++){
        cout<<"*";
    }
    cout<<endl;
}

// Diamond 
int n=5;
for(int i=1; i<=n; i++){
    
    for(int j=1; j<=n-i; j++){
        cout<<" ";
    }
    for(int j=1; j<=i; j++){
        cout<<"* ";
    }
    cout<<endl;
}
for(int i=n; i>=1; i--){
    
    for(int j=n-i; j>=1; j--){
        cout<<" ";
    }
    for(int j=i; j>=1; j--){
        cout<<"* ";
    }
    cout<<endl;
}
    
return 0;
}
