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
    ll n;
    cin>>n;
    
    int count=0;

   for(;n>0;n/=10)
        count+=(n%10==4 || n%10==7);

   if(count==4|| count==7)
        cout<<"YES";
    else
        cout<<"NO";   
}

int main(){
    fast;

    // test(t)
        solve();

re;
}