#include<iostream>
using namespace std;

void maximum(int temp, int& max_joy);

int main() {

	int no_res, time_lim,max_joy;
	cin >> no_res >> time_lim;

	int f, t;
	cin >> f >> t;
	
	//initializing max_joy
	if (t > time_lim) {
		max_joy = f - (t - time_lim);
	}
	else
		max_joy = f;

	//max_joy of rabbits
	while (--no_res) {
		cin >> f >> t;

		int temp;
		if (t > time_lim) {
			temp = f - (t - time_lim);
		}
		else
			temp = f;
	
		maximum(temp, max_joy);
	}

	cout << max_joy;

	return 0;
}

void maximum(int temp, int& max_joy) {
	if (max_joy < temp)
		max_joy = temp;
}