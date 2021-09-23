#include<iostream>

using namespace std;

int main() {
	int n, count(0);
	char color1,color2;

	cin >> n >> color1;

	while (--n) {
		cin >> color2;

		if (color1 == color2)
			count++;

		color1 = color2;
	}

	cout << count;
	return 0;
}