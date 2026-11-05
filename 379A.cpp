#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int remCandle = 0;
    int totalHours = 0;

    while (a > 0)
    {
        totalHours += a;
        remCandle += a;
        a = remCandle / b;
        remCandle = remCandle % b;
    }

    cout << totalHours << endl;
    
    return 0;
}