#include <bits/stdc++.h>
using namespace std;
int main()
{
    // All kind of loop er complexity holo o(n)

    // But Nested Loop jodi hoy tahole loop er Complexity hobe o(n)
    // mul kotha holo nested loop er complexity  multipication  hoy

    int n;
    cin >> n;

    for (int j = 1; j < n; j++)
    {

        // eitar comexity holo o(n) akn ei atar vitore jodi arekta loop dei tahole oi loop er o compklexity hobe o(n)
        for (int i = 1; i < n; i++)
        {
            cout << " j = " << j << "  & i = "<< i << endl;

            // ei loop  her complxity  holo o(n)
        }

        cout << endl;
    }

    // Akn total 2 ta loop er complexity hobe 2 ta loop er multipication  er soman
    // tahole loop er  total complexity hobe --> o(n*n) ba o(n^2)

    return 0;
}
