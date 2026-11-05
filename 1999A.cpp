#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n;

    while (t--)
    {
        cin >> n;
        int firstDigit = n/10;
        int lastDigit = n%10;

        cout << (firstDigit + lastDigit) << endl;
    }


    return 0;
}