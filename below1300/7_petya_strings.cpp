#include<iostream>
#include<string>

using namespace std;

void to_lowercase(string &s);

int main() {
		string s1, s2;
		cin >> s1 >> s2;

		to_lowercase(s1);
		to_lowercase(s2);

		if (s1 > s2)
			cout << 1;
		else if (s2 > s1)
			cout << -1;
		else
			cout << 0;

	return 0;
}

void to_lowercase(string &s) {
	for (int i = 0; i < s.length(); i++)
		if (s[i] < 97)
			s[i] = char(s[i] + 32);
}