#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /* Solve Started from Here! */

    int n;
    cin >> n;

    int a, b, c;

    while (n--)
    {
        cin >> a >> b >> c;

        int max, min;
        
        if (a>b)
        {
            max = a;
            min = b;
        }
        else
        {
            max = b;
            min = a;
        }

        double val = (double)(max-min)/c;
        double minMoves = ceil(val/2);

        cout << minMoves << endl;
    }
    
    return 0;
}