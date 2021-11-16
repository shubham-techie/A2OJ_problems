#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; 
    cin>>n>>m;

    if(n<27){
    n=pow(2,n);
    cout<<m%n;
    }
    else{
        cout<<m;
    }

    return 0;
}