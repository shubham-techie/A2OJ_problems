#include<bits/stdc++.h>
using namespace std;

int checkPrime(int n);

int main(){
    long long n; cin>>n;
    long long sum=2;

    for(long long i=3;i<=n;i++)
        if(checkPrime(i))
            sum+=i;
    
    cout<<sum;
}

int checkPrime(int n){
    int flag=1;  //no is prime

    for(int i=2;i<n;i++)
        if(n%i==0){
            flag=0;
            break;
        }
    
    return flag;
}