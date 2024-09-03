#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr_size, test_case;
    cin >> arr_size >> test_case;
    int arr[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < test_case; i++)
    {
        int first_number, last_number;
        cin >> first_number >> last_number;
        long long int sum = 0;
        for (int j = first_number - 1; j <= last_number - 1; j++)
        {
            sum = sum + arr[j];
        }
        cout << sum << endl;
    }

    return 0;
}
