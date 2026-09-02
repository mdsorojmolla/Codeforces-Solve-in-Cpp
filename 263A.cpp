#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /* Solve Starts From Here! */

    int n;
    int targetColumn = 0;
    int targetRow = 0;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> n;
            if (n == 1)
            {
                targetColumn = j;
                targetRow = i;
            }
        }
    }

    int count = abs(targetColumn - 2) + abs(targetRow - 2);

    cout << count << endl;

    return 0;
}