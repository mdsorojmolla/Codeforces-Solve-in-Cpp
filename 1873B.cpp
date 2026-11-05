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

        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int min = 10;

        for (int i=0; i<n; i++)
        {
            if (arr[i]<min)
            {
                min = arr[i];
            }
        }

        for (int i=0; i<n; i++)
        {
            if(arr[i]==min)
            {
                arr[i]+=1;
                break;
            }
        }

        long long product = 1;

        for (int i=0; i<n; i++)
        {
            product *= arr[i];
        }

        cout << product << endl;
    }
    
    return 0;
}