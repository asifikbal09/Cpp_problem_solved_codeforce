
#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve()
{
long long int n;
cin>>n;
long long int sum=0;
if(n%2==0){
    sum = (n/2);
}else{
    sum = -(n+1)/2;
}

cout<<sum;
}

int main()
{
    solve();
    return 0;
}
