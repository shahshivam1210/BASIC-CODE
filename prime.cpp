#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    cout<<"to check prime number tp check :";
    cin>>n;

    for ( i=2; i<n; i++){
        if ((n%i)==0){
            cout<<"not prime"<<endl;
            break;
        }
    }
    if (i==n){
        cout<<"it is a prime number"<<endl;
    }
    return 0;
}