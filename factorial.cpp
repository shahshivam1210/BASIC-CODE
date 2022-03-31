#include <iostream>
using namespace std;

int main()
{
    int n;
    int m = 1;

    cout << "Enter a positive integer: \n ";
    cin >> n;
    if ( n > 0) {
        for(int i = 1; i <=n; ++i) {
            m *= i;
        }
        cout << "Factorial of " << n << " = " << m;    
    }
    return 0;
}