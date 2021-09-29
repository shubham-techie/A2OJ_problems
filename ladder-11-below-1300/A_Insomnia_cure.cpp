#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define ff(i,a,b) for(int i=a;i>=b;i--)
#define fc(i,a,b,c) for(int i=a;i<b;i+=c)
#define w(n) while(n--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test(t) int t; cin>>t; w(t)
#define endl "\n";
#define re return 0;
using namespace std;
typedef long long int ll;

int d;
void increment(int x,int a[]);

void solve(){
    int k,l,m,n;
    cin>>k>>l>>m>>n>>d;

    if(k==1 || l==1 || m==1 || n==1){
        cout<<d;
        return;
    }

    int count(0);
    int* a=new int[d+1]{0};

    increment(k,a);
    increment(l,a);
    increment(m,a);
    increment(n,a);

    f(i,1,d+1)
        count+=(a[i]!=0); 
    cout<<count;
}

int main(){
    fast;
    // test(t)
        solve();
    re;
}

void increment(int x,int a[]){
    fc(i,x,d+1,x)
        a[i]++;
}