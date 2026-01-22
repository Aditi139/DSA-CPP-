#include<iostream>
using namespace std;
int main(){
string n;
int a,b;
cin>>a>>b;
for(int i=0;i<5;i++){
    cin>>n;
}

for(int i=0;i<10;i++){
  cout<<n<<" ";
}
cout<<endl;

cout<<a+b<<" "<<a-b<<" "<<a*b<<" " <<a%b<<endl;
cout<<(64>>2)<<endl;
cout<<(10<<2)<<endl;

int c, d;
cin>>d>>c;
cout<<(d|c)<<endl;
cout<<(d&c);


return 0;
}
