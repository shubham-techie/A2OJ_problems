#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int even(0),odd{0};
    for(int i=0;i<n;i++){
        int tmp; cin>>tmp;

        if(i%2==0 && tmp%2!=0)
            even++;
        else if(i%2==1 && tmp%2==0)
            odd++;
    }

    if(even==odd)
        cout<<even<<"\n";
    else 
        cout<<-1<<"\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}