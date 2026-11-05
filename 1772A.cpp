#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Solves Starts from Here! */

    int t;

    cin >> t;

    while (t--)
    {
        string cal;
        cin >> cal;

        int res = (cal[0] - '0') + (cal[2]-'0');

        cout << res << endl;
    }
    
    return 0;
}