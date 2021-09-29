#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define ff(i,a,b) for(int i=a;i>=b;i--)
#define fc(i,a,b,c) for(int i=a;i<b;i+=c)
#define w(n) while(n--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test(t) int t; cin>>t; w(t)
#define endl "\n";
#define re return 0;

using namespace std;
typedef long long int ll;

void solve(){
    int n, a[2]={0},c[2]={0}, count(0);
    cin>>n;
  
    for(ll i=0;i<n*2;i++){
        int b;
        cin>>b;

        if(i%2==0){
            a[0]+=(b==0);
            a[1]+=(b==1);
        }
        else{
            c[0]+=(b==0);
            c[1]+=(b==1);
        }
    }

    count+=(min(a[0],a[1]));    
    count+=(min(c[0],c[1])); 
    cout<<count;  
}

int main(){
    fast;
    // test(t)
        solve();
    re;
}