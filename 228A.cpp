#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /* Solve Starts From Here! */

    int n=4;
    vector <int> arr(n);

    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int count=0;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}