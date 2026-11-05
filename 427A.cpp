#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    int availableOfficers = 0;
    int unsolvedCase = 0;

    for (int i=0; i<t; i++)
    {
        int events;
        cin >> events;

        if (events > 0)
        {
            availableOfficers += events;
        }
        else if (events == -1)
        {
            if (availableOfficers > 0)
            {
                availableOfficers --;
            }
            else
            {
                unsolvedCase ++;
            }
        }
    }

    cout << unsolvedCase << endl;

    return 0;
}