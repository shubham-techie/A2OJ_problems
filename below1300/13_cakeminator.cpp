#include<iostream>
#include<vector>
#include<tuple>

using namespace std;

int main() {
    int r, c;
    int count_r{ 0 }, count_c(0);  //evil free rows and cols
    int no_cake_in_rows, no_cake_in_cols, no_repeated_cells, max_cells_to_eat;
    vector<tuple<int, int> > evil_idx;

    cin >> r >> c;

    //taking input and storing evils index in vector as tuples
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            char temp;
            cin >> temp;

            if (temp == 'S')
                evil_idx.push_back(make_tuple(i, j));
        }

    //counting no. of evil free rows
    for (int i = 0; i < r; i++) {
        int flag = 0;

        for (int j = 0; j < evil_idx.size(); j++)
            if (i == get<0>(evil_idx[j])) {
                flag = 1;
                break;
            }

        if (flag == 0)
            count_r++;
    }

    //counting no. of evil free cols
    for (int i = 0; i < c; i++) {
        int flag = 0;

        for (int j = 0; j < evil_idx.size(); j++)
            if (i == get<1>(evil_idx[j])) {
                flag = 1;
                break;
            }

        if (flag == 0)
            count_c++;
    }

    no_cake_in_rows = count_r * c;
    no_cake_in_cols = count_c * r;
    no_repeated_cells = count_c * count_r;
    max_cells_to_eat = no_cake_in_rows + no_cake_in_cols - no_repeated_cells;

    cout << max_cells_to_eat;

	return 0;
}