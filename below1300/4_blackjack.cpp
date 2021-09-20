#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int required_sum, no_of_ways;
	cin >> required_sum;

	//required_sum = [1-10] --> no card has (-9) to (-1) values to sum up 10
	//required_sum = [22-25] --> no card has [12-15] values to sum up 10
	if (required_sum < 11 || required_sum>21)
		no_of_ways = 0;

	//required_sum = [11-19] --> (any1 required card from cards numbered [2 to 9] and ace(for value==1) can sum up 10) *4(suits)
	//required_sum = [21] --> (ace card(for value==11) can sum up 10) * 4 suits
	else if (required_sum < 20 || required_sum == 21)
		no_of_ways = 4;

	//required_sum = [20] --> (cards numbered [10] and king, queen or jack can sum up 10) * 4 suits
	else if (required_sum == 20)
		no_of_ways = 15;

	cout << no_of_ways;
	return 0;
}