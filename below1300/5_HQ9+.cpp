#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string program, instruction = "HQ9";
	cin >> program;

	int i = 0;
	for (i = 0; i < instruction.length(); i++)
		if (program.find(instruction[i]) != string::npos) {
			cout << "YES";
			break;
		}
	if (i == instruction.length())
		cout << "NO";
	return 0;
}