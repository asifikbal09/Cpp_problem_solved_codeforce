
#include <bits/stdc++.h>
#include<string>
using namespace std;

string toLowerCase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

void solve()
{
    string firstStr,secondStr;
    // cin>>firstStr;
    getline(cin,firstStr);
    // cin>>secondStr;
    getline(cin,secondStr);

    
    
    string firstLowerStr =toLowerCase(firstStr);
    string secondLowerStr =toLowerCase(secondStr);
    
    int result = firstLowerStr.compare(secondLowerStr);


    cout<<result;

}

int main()
{
    solve();

    return 0;
}


