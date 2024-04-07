#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, v = 0, i = 0, k = 0, a = 0;
    cin >> n >> m;
    char aa[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            aa[i][j] = ch;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (aa[j][i] == 'v' && v == 0)
                v = 1;
            else if (aa[j][i] == 'i' && v == 1)
                i++;
            else if (aa[j][i] == 'k' && i == 1)
                k++;
            else if (aa[j][i] == 'a' && k == 1)
                a++;
        }
    }

    if (v + i + k + a == 4)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
