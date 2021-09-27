#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define w(n) while(n--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test(t) int t; t=1; cin>>t; w(t)
#define endl "\n";
#define re return 0;

using namespace std;
typedef long long int ll;

void solve(){
   int n,no_5s(0),no_0s{0};
   cin>>n;

   f(i,0,n){
        int digit;
        cin>>digit;

        no_5s+=(digit==5);
   }
   no_0s=n-no_5s;

   if(no_0s==0)
        cout<<-1;

    else if(no_5s<9)
        cout<<0;
        
    else{
        no_5s-=(no_5s % 9);

        f(i,0,no_5s)
            cout<<5;
        f(i,0,no_0s)
            cout<<0;
    }
}

int main(){
    fast;

    solve();

re;
}