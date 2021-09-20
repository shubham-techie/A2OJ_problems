#include<bits/stdc++.h>
using namespace std;

void XOR(string b1, string b2,string &exor);

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string b1,b2,exor;

	cin >> b1;
	cin >> b2;

	XOR(b1, b2,exor);
	cout << exor;
	return 0;
}

void XOR(string b1, string b2,string &exor) {

	for (int i = 0; i < b2.length(); i++)
		if (b1[i] == b2[i])
			exor += "0";
		else
			exor += "1";
}