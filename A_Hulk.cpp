
#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    string a = "I love";
    string b = "I hate";
    string c = " that ";
    string d = " it";
    string add ;

    for (int i = 1; i <= n; i++)
    {
        if(i%2!=0){
            add +=b;
            if(i!=n){
                add+=c;
            }
        }else{
            add+=a;
            if(i!=n){
                add+=c;
            }
        }
    }
    add+=d;
cout<<add;
}

int main()
{
    solve();

    return 0;
}
