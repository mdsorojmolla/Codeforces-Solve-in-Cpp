#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

void maxGCD(int n)
{
    int temp_a = n/2;
    int temp_b = temp_a*2;

    int result = gcd(temp_a, temp_b);

    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    int n;

    while (t--)
    {
        cin >> n;
        maxGCD(n);
    }

    return 0;
}