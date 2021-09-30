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

void solve(){
    string s;
    cin>>s;
    
    vector<int> v;

    fc(i,0,s.length(),2)
        v.push_back(s[i]-'0');
    
    sort(v.begin(),v.end());

    f(i,0,v.size()){
        cout<<v[i];

        if(i==v.size()-1)
            break;

        cout<<"+";
    }
}

int main(){
    fast;
    // test(t)
        solve();
    re;
}