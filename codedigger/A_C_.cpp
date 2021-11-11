#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, n,count=0;
    cin >> a >> b >> n;

    if (b > a)
        swap(a, b);

    while (a <= n)
    {
        b += a;
        count++;

        if (b > a)
            swap(a, b);
    }

    cout<<count<<"\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();
    return 0;
}

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}