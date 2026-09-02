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
    int count_D = 0;
    int count_A = 0;

    for(int i=0; i < n; i++)
    {
        if(str[i]=='A')
        {
            count_A ++;
        }
        else
        {
            count_D ++;
        }
    }

    if(count_A > count_D)
    {
        cout << "Anton" << endl;
    }
    else if (count_D > count_A)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}