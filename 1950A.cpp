#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Solves Starts from Here! */
    
    int t;
    cin >> t;

    int a, b, c;

    while (t--)
    {
        cin >> a >> b >> c;

        if (a < b && b < c)
        {
            cout << "STAIR" << endl;            
        }
        else if (a < b && b > c)
        {
            cout << "PEAK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }
    }
    
    return 0;
}