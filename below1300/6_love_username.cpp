#include<iostream>
using namespace std;

int main() {
	int n, rating;

	cin >> n >> rating;

	int min(rating), max(rating), count(0);

	while (--n) {
		cin >> rating;

		if (min > rating) {
			min = rating;
			count++;
		}
		
		if (max < rating) {
			max = rating;
			count++;
		}
	}

	cout << count;
	return 0;
}