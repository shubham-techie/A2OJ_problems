#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define ff(i,a,b) for(int i=a;i>=b;i--)
#define w(n) while(n--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test(t) int t; cin>>t; w(t)
#define endl "\n";
#define re return 0;

using namespace std;
typedef long long int ll;

void solve(){
    string s,t;
    cin>>s>>t;
    
    int t_len=t.length();
    int s_len=s.length();
    int j=s_len-1;
    bool flag=true;
    
    if(t_len>s_len){
        cout<<"no"<<endl;
        return;
    }
    else if(t_len==s_len && t==s){
        cout<<"yes"<<endl;
        return;
    }
    
    ff(i,t_len-1,0){
        while(j>=0 && t[i]!=s[j])
            j-=2;

        if(j<0){
            flag=false;
            break;
        }
            
        j--;
    }

    if(flag){
        cout<<"yes"<<endl;
    }
    else
        cout<<"no"<<endl;
}

int main(){
    fast;

    test(t)
        solve();

re;
}