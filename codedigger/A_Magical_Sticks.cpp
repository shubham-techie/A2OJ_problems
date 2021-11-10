#include<bits/stdc++.h>
#define test() int t; cin>>t; while(t--)

typedef long long ll;
using namespace std;

void solve(){
    ll n,x=1;
    cin>>n;

    if(n==1 || n==2)
        cout<<x<<"\n";
    else{
        x=(n-1)/2 +1;
        cout<<x<<"\n";
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test()
        solve();

    return 0;
}