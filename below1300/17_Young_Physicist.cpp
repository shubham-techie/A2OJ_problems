#include<bits/stdc++.h>
#define re return 0;
#define w(n) while(--n)
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,flag(0);
cin>>n;

int vector[3];
f(i,0,3)
    cin>>vector[i];

w(n)
    f(i,0,3){
        int temp;
        cin>>temp;
        vector[i]+=temp;
    }

f(i,0,3)
    if(vector[i]!=0){
        flag=1;
        break;
    }

if(flag==1)
    cout<<"NO";
else
    cout<<"YES";

re;
}