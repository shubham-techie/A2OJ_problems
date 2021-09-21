#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, j(1);
	cin >> n;
	
	int* candies = new int[n];

	for (int i = 0, k = 1; i < n; i += 2, k += n*2)
		candies[i] = k;

	for (int i = 1, k = n * 2; i < n; i += 2, k =n*2* j) {
		candies[i] = k;
		j++;
	}

	 j = 0;
	 while (j < n) {
		 f(i, 0, n) {
			 cout << candies[i] << " ";

			 if (i % 2 == 0)
				 candies[i] = candies[i] + 1;
			 else
				 candies[i] = candies[i] - 1;
		 }
		 cout << "\n";
		 j++;
	 }
	return 0;
}