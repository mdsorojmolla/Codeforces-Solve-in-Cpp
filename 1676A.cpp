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

    while(n--)
    {
        cin >> str;
        int sum1 = 0;
        int sum2 = 0;
        for (int i=0; i<3; i++)
        {
            sum1+=str[i]-48;
        }
        for(int i=3; i<6; i++)
        {
            sum2+=str[i]-48; 
        }

        if (sum1==sum2)
        {
            cout << "YES" <<endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}