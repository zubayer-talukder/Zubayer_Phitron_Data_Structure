#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr_size, test_case;
    cin >> arr_size >> test_case;
    long long int arr[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }
    long long int pre[arr_size]; // prefix sum initialization
    pre[0] = arr[0];

    for (int u = 1; u < arr_size; u++)
    {
        pre[u] = arr[u] + pre[u - 1]; // eitar mane lets say akta array dewa ase 6 4 2 7 2 7   --->> eitar last er tar position unojai kaj korte chaile , last er ta + er agger prefix sum ber korte hobe
    }

    for (int i = 0; i < test_case; i++)
    {
        int first_number, last_number;
        cin >> first_number >> last_number;
        first_number--, last_number--; // index er sathe milanor jonno 1 minus korci
        long long int sum = 0;
        if (first_number == 0)
            sum = pre[last_number]; // jodi first e  index 0 hoy er mane holo last er index projonto sob gular man dekhate hobe , kintu prefix sum er rules onujaii eita easily aagge thekey ber kora ase tai notun kore ber kora lagbe na ,  tai  sum = pre[last] hobe
        else
            sum = pre[last_number] - pre[first_number - 1];
        cout << sum << endl;
    }

    return 0;
}
