#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}

int main()
{
    solve();

    return 0;
}
