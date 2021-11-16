#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,count{0}; 
    cin>>n>>k;

    while(n!=0){

        if(n%k==0){
            n/=k;
            count++;
        }
        else {
            long long rem=n%k;
            n-=(rem);
            count+=(rem);
        }
    }

    cout<<count<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;

    while(t--)
        solve();

    return 0;
}