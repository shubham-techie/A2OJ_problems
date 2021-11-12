#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    if(n%2==0)
        cout<<n/2;
    else
        cout<<(-(n+1)/2);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    solve();
    return 0;
}