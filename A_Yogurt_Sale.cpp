
#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve()
{
  int n,a,b;
  cin>>n>>a>>b;
int sum = 0;
if(a*2<b){
sum = n*a;
}else{
    if(n%2==0){
        sum= (n/2)*b;
    }else{
        sum = (((n-1)/2)*b)+a;
    }
}

cout<<sum<<endl;

}

int main()
{
    int t;
    cin>>t;
    while (t>0)
    {
    solve();
    t--;
    }
    
    return 0;
}
