#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main ()
{
    string userName;
    cin >> userName;

    int length = userName.length();

    sort(userName.begin(), userName.end());

    int count = 0;

    for (int i=0; i<length; i++)
    {   
        if (userName[i]!=userName[i+1])
        {
            count ++;
        }
    }

    if (count%2==0)
    {
        cout << "CHAT WITH HER!" <<endl;
    }

    else
    {
        cout << "IGNORE HIM!" <<endl;
    }

    return 0;
}