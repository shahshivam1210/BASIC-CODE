#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"give the value of a: \n";
    cin>>a;
    cout<<"give the value of b: \n";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"a = "<<a<<" , " <<"b = "<<b<<endl;

    return 0;
}