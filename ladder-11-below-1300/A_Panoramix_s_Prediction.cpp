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

bool prime(int n);

void solve(){
    int n,m;
    cin>>n>>m;

    f(i,n+1,m+1)
        if(prime(i) && i!=m){
            cout<<"NO";
            return;
        }
    
    if(!prime(m))
        cout<<"NO";
    else
     cout<<"YES";   
}

int main(){
    fast;

    // test(t)
        solve();

re;
}

bool prime(int n){
    int i=2;

    while(i<n)
        if(n%i!=0)
            i++;
        else
            return false;
    
    return true;
}