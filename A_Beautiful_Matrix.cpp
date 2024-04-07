
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a[5][5];
    int count = 0;
    int row,col;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1){
                row =i;
                col=j;
            }
        }
    }

    count +=abs(2-row);
    count +=abs(2-col);

    
    
    cout << count;
}

int main()
{
    solve();

    return 0;
}


