#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define ff(i,a,b) for(int i=a;i>=b;i--)
#define w(n) while(n--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test(t) int t; cin>>t; w(t)
#define endl "\n";
#define re return 0;

using namespace std;
typedef long long int ll;

void solve(){
    int n;
    cin>>n;

    if(n%2!=0){
        cout<<-1;
        return;
    }

    for(int i=1;i<=n;i+=2){
        cout<<(i+1)<<" ";
        cout<<i<<" ";
    }

}

int main(){
    fast;

    // test(t)
        solve();

re;
}