
#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int count=0;
  for(int i=0;i<s.size();i++){
    if(i!=s.size()-1&&s[i]==s[i+1]){
        count++;
    }
  }

cout<<count;

}

int main()
{
    solve();
    return 0;
}
