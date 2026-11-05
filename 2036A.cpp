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
        int n;
        cin >> n;

        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int differ=0;

        bool found = true;

        for (int i=1; i<n; i++)
        {
            differ = abs(arr[i]-arr[i-1]);

            if (differ != 5 && differ !=7)
            {
                found = false;
                break;
            }
        }

        if (found)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    
    return 0;
}