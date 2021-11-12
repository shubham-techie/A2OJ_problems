#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    int count=0;

    cin>>n;

    while(n!=1){
        if(n%2==0){
            n/=2;
            count++;
        }
        else if(n%3==0){
            n=2*n/3;
            count++;
        }
        else if(n%5==0){
            n=4*n/5;
            count++;
        }
        else
            break;
    }

    if(n==1){
        cout<<count<<"\n";
    }
    else
        cout<<-1<<"\n";
}

int main(){
    int t;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}