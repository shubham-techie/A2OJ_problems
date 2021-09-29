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
    int year;
    cin>>year;

   while(true){
       year++;

       int a[10]={0};
        int temp=year;
        bool flag=true;

       while(temp>0){
           a[temp%10]++;

           if(a[temp%10]>1){
                flag=false;
                break;
           }
           else
                temp/=10;
       }

       if(flag){
           cout<<year;
           break;
       }
   }
}

int main(){
    fast;

    // test(t)
        solve();

re;
}