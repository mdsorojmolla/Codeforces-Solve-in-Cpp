#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, min_animal;
        cin >> n;

        if (n%4 == 0)
        {
            min_animal = n/4;
            cout << min_animal << endl;
        }
        else
        {
            min_animal = (n/4)+1;
            cout << min_animal << endl;
        }
    }

    return 0;
}