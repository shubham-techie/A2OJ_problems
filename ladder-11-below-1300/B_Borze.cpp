#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define w(n) while(n--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test(t) int t; cin>>t; w(t)
#define endl "\n";
#define re return 0;

using namespace std;
typedef long long int ll;

void solve(){
    string code;
    cin>>code;

    int len=code.length();
    f(i,0,len){
        if(code[i]=='.')
            cout<<0;
        else{
            i++;

            if(code[i]=='.')
                cout<<1;
            else
                cout<<2;
        }
    }
}

int main(){
    fast;

    // test(t)
        solve();

re;
}