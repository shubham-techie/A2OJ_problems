#include <bits/stdc++.h>
using namespace std;
constexpr auto ARRAY_SIZE = 5;

int cal_moves(int pos);

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int matrix[ARRAY_SIZE][ARRAY_SIZE];
	int row_pos, col_pos, count = 0;

	for (int i = 0; i < ARRAY_SIZE; i++)
		for (int j = 0; j < ARRAY_SIZE; j++) {
			cin >> matrix[i][j];

			if (matrix[i][j] == 1) {
				row_pos = i;
				col_pos = j;
			}
		}

	if (row_pos != 2)
		count += cal_moves(row_pos);
	if (col_pos != 2)
		count += cal_moves(col_pos);

	cout << count;
	return 0;
}

int cal_moves(int pos) {

	switch (pos) {
	case 0:
	case 4:return 2;

	case 1:
	case 3:return 1;
	}
}