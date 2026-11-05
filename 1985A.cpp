#include <bits/stdc++.h>
using namespace std;

void swapString()
{
    string a, b;
    cin >> a >> b;

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << a << " " << b << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Solves Starts from Here! */
    
    int t;
    cin >> t;

    while (t--)
    {
        swapString();
    }

    return 0;
}