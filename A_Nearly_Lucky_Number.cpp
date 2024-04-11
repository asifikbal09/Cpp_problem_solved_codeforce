
#include <bits/stdc++.h>
using namespace std;

void solve()
{
long long int n;
int lucky=0,lastDigit;
cin>>n;
while (n>0)
{
   lastDigit = n%10;
   if(lastDigit==7||lastDigit==4){
    lucky++;
   }
   n= n/10; 
}

if(lucky==7||lucky==4){
    cout<<"YES";
}else{
    cout<<"NO";
}

}

int main()
{
    solve();
    return 0;
}
