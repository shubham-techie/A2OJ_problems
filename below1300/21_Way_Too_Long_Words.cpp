#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define w(n) while(n--)
#define re return 0;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<string> vec;
    f(i,0,n){
        string word;
        int len;

        cin>>word;
        len=word.length();

        if(len>10)
            word=word[0] + to_string(len-2) + word[len-1];
        
        vec.push_back(word);
    }

    for(auto itr:vec)
        cout<<itr<<"\n";
    re;
}