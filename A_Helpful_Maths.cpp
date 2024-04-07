
#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve()
{
    string s;

    vector<int> a;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            a.push_back(s[i] - '0');
        }
    }

    

    sort(a.begin(), a.end());

    for (int i=0; i<a.size();i++)
    {
        cout << a[i];
        if(i!=a.size()-1){
            cout<<'+';
        }
    }

}

int main()
{
    solve();
    return 0;
}
