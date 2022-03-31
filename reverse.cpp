#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    int rev = 0;

    cout << "Enter a positive number: ";
    cin >> n;
    while (n != 0)
    {
        m = n % 10;
        rev = (rev * 10) + m;
        n = n / 10;
    }
    cout << " The reverse of the number is: " << rev << endl;
    return 0;
}
