#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Top part
    for (int i = 0; i < n - 1; ++i)
    {
        // Print leading spaces
        for (int j = 0; j < i; ++j)
        {
            cout << " ";
        }
        // Print left diagonal
        cout << "\\";
        // Print spaces between the diagonals
        for (int j = 0; j < 2 * (n - i - 1) - 1; ++j)
        {
            cout << " ";
        }
        // Print right diagonal
        if (i < n - 1)
        {
            cout << "/";
        }
        cout << endl;
    }

    // Middle part
    for (int i = 0; i < n - 1; ++i)
    {
        cout << " ";
    }
    cout << "X" << endl;

    // Bottom part
    for (int i = 0; i < n - 1; ++i)
    {
        // Print left diagonal
        cout << "/";
        // Print spaces between the diagonals
        for (int j = 0; j < 2 * i + 1; ++j)
        {
            cout << " ";
        }
        // Print right diagonal
        cout << "\\";
        cout << endl;
    }

    return 0;
}
