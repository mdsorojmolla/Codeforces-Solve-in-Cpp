#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    for (int i=0; i < str.length(); i+=2)
    {
        for (int j = i+2; j < str.length(); j+=2)
        {
            if (str[i] > str[j])
            {
                swap(str[i], str[j]);
            }
        }
    }

    cout << str << endl;

    return 0;
}

