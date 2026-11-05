#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Solves Starts from Here! */
    
    int n;
    cin >> n;
    
    int p, q;

    cin >> p;
    int arrX[p];

    for (int i=0; i<p; i++)
    {
        cin >> arrX[i];
    }

    cin >> q;
    int arrY[q];

    for (int i=0; i<q; i++)
    {
        cin >> arrY[i];
    }

    bool foundAll = true;

    for (int i=1; i<=n; i++)
    {
        bool found = false;

        for (int j=0; j<p; j++)
        {
            if (arrX[j] == i)
            {
                found = true;
            }
        }

        for (int j=0; j<q; j++)
        {
            if (arrY[j] == i)
            {
                found = true;
            }
        }

        if (!found)
        {
            foundAll = false;
            break;
        }
    }

    if (foundAll)
    {
        cout << "I become the guy." << endl;
    }

    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}