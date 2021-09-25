#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define bf(i,a,b) for(int i=a;i>=b;i--)
#define w(n) while(n--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define re return 0;
using namespace std;

int main(){
    fast;

    int n;
    cin>>n;

    //upper-full-triangle
    f(i,1,n+2){
        int k=1;
        
        //spaces
        bf(j,(n-1)-(i-1),0)
           cout<<"  ";

        //upper-left-triangle
        f(j,0,i){
            if(k==1 && j==0){
                cout<<j;
                k=0;
            }
            else
                cout<<" "<<j;
        }

        //upper-right-triangle
        bf(j,i-2,0)
            cout<<" "<<j;

       cout<<"\n";
    }


    //lower-full-triangle
    bf(i,n-1,0){
        int k=1;

        //spaces
        f(j,0,n-i)
         cout<<"  ";

        //lower-left-triangle
        f(j,0,i+1){
            if(k==1 && j==0){
                cout<<j;
                k=0;
            }
            else
                cout<<" "<<j;
        }
        
        //lower-right-triangle
        bf(j,i-1,0)
            cout<<" "<<j;

       cout<<"\n";
    }

re;
}