#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int x = 0;

    for (int i = 0; i < t; i++)
    {
        string str;
        cin >> str;

        if (str[1] == '+')
        {
            x++;
        }
        else 
        {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}