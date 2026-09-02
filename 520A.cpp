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
    cin >> str;

    int visited[26] = {0};
    int count = 0;

    if (n<26)
    {
        cout << "NO" << endl;
    }

    else
    {
        for (int i=0; i < str.length(); i++)
        {
            int character = tolower(str[i]);

            if (character >= 'a' && character <= 'z')
            {
                int index = character - 'a';

                if (!visited[index])
                {
                    visited[index] = 1;
                    count ++;
                }
            }
            
        }

        if (count==26)
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