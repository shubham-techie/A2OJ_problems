#include <bits/stdc++.h>
#define vi vector<int>

using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;

    vi c(m);

    while(n--){
        int x;
        cin>>x;

        for(int i=0;i<x;i++){
            int a;
            cin>>a;
            c[a-1]++;
        }
    }

    for(int i=0;i<m;i++)
        if(c[i]==0){
            cout<<"NO"<<endl;
            return;
        }

    cout<<"YES"<<endl;
}

int main()
{
    solve();

    return 0;
}