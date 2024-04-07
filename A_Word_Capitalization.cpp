
#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve()
{
  string a;
  cin>>a;
  if((int)a[0]>97 && a.size()>1){
    a[0]=(int)a[0]-32;
  }
  cout<<a;

}

int main()
{
    solve();
    return 0;
}
