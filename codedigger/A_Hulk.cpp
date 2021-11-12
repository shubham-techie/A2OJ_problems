#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string hate = "I hate", love = "I love";
    int n;
    cin>>n;

    bool flag=true,f=false;

    cout<<hate;
    while(--n){
        if(flag){
            cout<<" that "<<love;
            flag=false;
        }
        else{
            cout<<" that "<<hate;
            flag=true;
        }
    }
      cout<<" it";
}

int main()
{
    solve();
    return 0;
}