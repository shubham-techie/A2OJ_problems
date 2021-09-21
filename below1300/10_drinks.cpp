#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, drink;
	float total_fraction = 0.00;
	cin >> n;

	f(i, 0, n) {
		cin >> drink;
		total_fraction += (drink / 100.00);
	}

	cout << (total_fraction * 100 / n);
	return 0;
}