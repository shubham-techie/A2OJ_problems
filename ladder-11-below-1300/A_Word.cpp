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
    string word;
    cin>>word;

    int len=word.length(), u_ct(0);
    int temp=len;

    //counting no of Uppercase letters
    w(temp)
        u_ct+=(word[temp]<97); 

    //for converting to Uppercase
    if(u_ct>len-u_ct)     
        transform(word.begin(),word.end(),word.begin(),::toupper);

    //for converting to Lowecase
    else        
        transform(word.begin(),word.end(),word.begin(),::tolower);
    
    cout<<word;
}

int main(){
    fast;

    // test(t)
        solve();

re;
}