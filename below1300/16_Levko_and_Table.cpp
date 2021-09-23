#include<iostream>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
int n,k;
cin>>n>>k;

f(i,n){
    f(j,n)
        if(i==j)
            cout<<k<<" ";
        else
            cout<<0<<" ";
    cout<<"\n";
}

    return 0;
}
