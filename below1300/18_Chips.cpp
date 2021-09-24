#include<bits/stdc++.h>
#define re return 0;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,i(1);
    cin>>n>>m;

    while(m>=i){
        m-=i;
        i++;

        if(i>n)
            i=1;
    }

    cout<<m;
    re;
}