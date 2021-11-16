#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x,count{0}; 
    cin>>n>>x;

    set<int> s;

    while(n--){
        int rank; cin>>rank;
        s.insert(rank);
    }

    int tmp=count+1;

    while(x>0 || s.count(tmp)){
        count++;

        if(!s.count(count))
            x--;
        
        tmp=count+1;
    }

    cout<<count<<"\n";
}

int main(){
    int t; cin>>t;

    while(t--)
        solve();

    return 0;
}