#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int passIn, passOut;
    int currPass = 0;
    int max = 0;

    while(n--)
    {
        cin >> passOut >> passIn;

        currPass = currPass - passOut + passIn;

        if (currPass > max)
        {
            max = currPass;
        }
    }

    cout << max << endl;

    return 0;
}