#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Solves Starts from Here! */

    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int min = x1;
    int max = x1;

    if (x2>max)
    {
        max = x2;
    }
    if (x3 > max)
    {
        max = x3;
    }
    
    if (x2<min)
    {
        min = x2;
    }
    if (x3<min)
    {
        min = x3;
    }

    int midPoint = max - min;

    cout << midPoint << endl;

    return 0;
}