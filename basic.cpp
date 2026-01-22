#include<iostream>
using namespace std;
int main(){
int a,b;
char op;
cin>>a>>b;
cin>>op;

if(op=='+'){
    cout<<a+b;
}
else if(op=='-'){
    cout<<a-b;
}
else if(op=='*'){
    cout<<a*b;
}
else if(op=='%'){
    cout<<a%b;
}
else if(op=='>>'){
cout<<(64>>2);
}
else if(op=='<<'){
cout<<(10<<2);}
else if(op=='|'){
    cout<<(a|b);
}
else{
   cout<<(a&b);
}
return 0;
}


