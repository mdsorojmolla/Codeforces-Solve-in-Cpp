#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /* Solve Starts From Here! */

    int t;
    cin >> t;

    string checker = "codeforces";
    string str;
    
    while(t--)
    {
        cin >> str;
        int found=0;
        for (int i=0; str[i]!='\0'; i++)
        {
            for(int j=0; checker[j]!='\0'; j++)
            {
                if(str[i]==checker[j])
                {
                    found = 1;
                    break;
                }
            }
        }
        if(found)
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