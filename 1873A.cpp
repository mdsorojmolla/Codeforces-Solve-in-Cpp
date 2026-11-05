#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* Solves Starts from Here! */
    
    int t;
    cin >> t;    
    char cards[3];
    
    while(t--)
    {
        for(int i=0; i<3; i++)
        {
            cin >> cards[i];
        }

        bool possible = false;

        if (cards[0]=='a' && cards[1]=='b' && cards[2]=='c')
        {
            cout << "YES" << endl;
        }

        else
        {
        for (int i=0; i<3; i++)
        {
            for (int j=i+1; j<3; j++)
            {
                swap(cards[i], cards[j]);
                if (cards[0]=='a' && cards[1]=='b' && cards[2]=='c')
                {
                    possible = true;
                }
                swap(cards[i], cards[j]);
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        }
    }
    
    return 0;
}