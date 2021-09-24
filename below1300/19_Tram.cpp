#include<bits/stdc++.h>
#define re return 0;
#define w(n) while(--n)
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int exit, enter;
    cin>>exit>>enter;

    int capacity,no_passenger{0};
    capacity=no_passenger=enter;

    w(n){
        cin>>exit>>enter;
        no_passenger-=(exit-enter);

        if(capacity<no_passenger)
            capacity=no_passenger;
    }

    cout<<capacity;
    re;
}