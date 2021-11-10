#include <bits/stdc++.h>
#define test() int t;    cin >> t;  while (t--)

typedef long long ll;
using namespace std;

void solve()
{
    ll x, y, n, a;
    cin >> x >> y >> n;

    int r=n%x;
    a=(n/x)*x+y;

    if(r<y)
        a-=x;
    
    cout<<a<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test()
        solve();

    return 0;
}