
#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve()
{
    int k, n, w;
    cin >> k >> n >> w;
    int sum = 0;
    int borrow;
    for (int i = 1; i <= w; i++)
    {
        sum+= (i*k);
    }
    if(n>sum){
        cout<<0;
    }else{
        borrow= sum-n;
        cout<<borrow;
    }
    
}

int main()
{
    solve();

    return 0;
}
