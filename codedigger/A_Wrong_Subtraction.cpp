#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;

    while(k--){
        if(n%10==0)
            n/=10;
        else
            n-=1;
    }
    cout<<n;
}

int main()
{
    solve();
    return 0;
}