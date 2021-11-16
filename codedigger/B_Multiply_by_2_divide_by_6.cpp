#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int moves=0;

    while(n!=1){
        if(n<6)
            break;
        
        moves++;
        if(n%6==0)
            n/=6;
        else
            n*=2;
    }

    if(n==3)
        moves+=2;
    else if(n!=1)
        moves=-1;

    cout<<moves<<"\n";

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;

    while(t--)
        solve();

    return 0;
}