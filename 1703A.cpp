#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /* Solve Starts From Here! */

    int n;
    cin >> n;

    string str;

   while (n--)
   {
        cin >> str;

        if ((str[0]=='y' || str[0] == 'Y') && (str[1] == 'e' || str[1] == 'E') && (str[2]=='s' || str[2] == 'S'))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
   }

    return 0;
}