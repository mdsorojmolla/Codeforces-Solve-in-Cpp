#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Solves Starts from Here! */
    
    int t;
    cin >> t;

    string str;
    string checker = "codeforces";

    while (t--)
    {
        cin >> str;
        int missChecked = 0;

        for (int i=0; i<10; i++)
        {
            if (str[i]!=checker[i])
            {
                missChecked ++;
            }
        }

        cout << missChecked << endl;
    }

    return 0;
}