#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int x, y, z, st, et, dt;
    cin >> x >> y >> z >> st >> et >> dt;

    int st_time = abs(x - y) * st;
    int el_time = abs(x - z) * et + abs(x - y) * et + 3 * dt;

    if (el_time <= st_time)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    solve();
    return 0;
}