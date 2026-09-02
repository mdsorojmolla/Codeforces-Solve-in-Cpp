#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /* Solve Starts From Here! */

    int t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        int arr[n];

            for(int i=0; i<n; i++)
            {
                cin >> arr[i];
            }

            for(int i=0; i<n; i++)
            {
                int count = 0;

                for(int j=0; j<n; j++)
                {
                    if(arr[i]==arr[j])
                    {
                        count ++;
                    }
                }

                if (count == 1)
                {
                    cout << i+1 << endl;
                    break;
                }
            }            
    }
    
    return 0;
}