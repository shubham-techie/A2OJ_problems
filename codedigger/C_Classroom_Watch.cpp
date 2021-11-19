#include<bits/stdc++.h>
using namespace std;

int digitSum(int n);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n; cin>>n;
    vector<int> v;

    for(int i=max(0,n-81);i<=n;i++)
        if(i+digitSum(i)==n)
            v.push_back(i);

    cout<<v.size()<<"\n";

    for(auto& itr:v)
        cout<<itr<<"\n";
}

int digitSum(int n){
    int sum=0;

    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}