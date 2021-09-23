#include<iostream>
#include<string>
using namespace std;

int main(){
int n,oper=0;
cin>>n;

while(n--){
    string exp;
    cin>>exp;

    if(exp.find('+') != string::npos)
        oper++;
    else
        oper--;
}

cout<<oper;
    return 0;
}