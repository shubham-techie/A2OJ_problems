#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define w(n) while(n--)
#define re return 0;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t;
    cin>>n>>t;

    char* queue=new char[n];
    f(i,0,n)
        cin>>queue[i];

    w(t)
        f(i,0,n-1)
            if(queue[i]=='B' && queue[i+1]=='G'){
                queue[i]='G';
                queue[i+1]='B';
                i++;
            }

    f(i,0,n)
        cout<<queue[i];
    re;
}