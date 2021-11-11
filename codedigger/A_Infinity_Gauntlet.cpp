#include <bits/stdc++.h>
using namespace std;

void solve()
{
    map<string, string> gems;
    vector<int> flag(6);

    gems.insert(pair<string, string>("purple", "Power"));
    gems.insert(pair<string, string>("green", "Time"));
    gems.insert(pair<string, string>("blue", "Space"));
    gems.insert(pair<string, string>("orange", "Soul"));
    gems.insert(pair<string, string>("red", "Reality"));
    gems.insert(pair<string, string>("yellow", "Mind"));

    int n;
    cin>>n;
    
    while (n--)
    {
        string color;
        cin >> color;

        gems.erase(color);
    }

    cout<<gems.size()<<"\n";
    for(auto itr=gems.begin();itr!=gems.end();++itr)
        cout<<itr->second<<"\n";
}

int main()
{
    solve();
    return 0;
}