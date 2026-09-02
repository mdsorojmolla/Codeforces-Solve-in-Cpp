#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main ()

{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n;
    cin >> n;

    vector <int> arr(n);

    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int max_length = 1;
    int current_length = 1;

    for (int i=0; i<n-1; i++)
    {
        if (arr[i]<=arr[i+1])
        {
            current_length ++;
        }

        else
        {
            max_length = max(max_length, current_length);

            current_length = 1;
        }
    }

    max_length = max(max_length, current_length);

    cout << max_length << endl;

    return 0;
}