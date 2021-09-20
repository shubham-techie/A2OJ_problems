#include<iostream>
#include<array>
#include<limits>

using namespace std;

void move_max(int height[], int max_pos);
void move_min(int height[],int ARAY_SIZE, int min_pos);

int main() {
	int ARRAY_SIZE, count = 0;
	int max = -1, max_pos = -1;
	int min = numeric_limits<int> ::max(), min_pos = -1;

	cin >> ARRAY_SIZE;
	int* height = new int[ARRAY_SIZE];

	//initializing array and finding max
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cin >> height[i];
		
		//finding max
		if (max < height[i]) {
			max = height[i];
			max_pos = i;
		}	
	}
	move_max(height, max_pos);
	count = max_pos;


	//finding min
	for (int i = ARRAY_SIZE-1; i >=0; i--)
		if (min > height[i]) {
			min = height[i];
			min_pos = i;
		}
	move_min(height,ARRAY_SIZE, min_pos);
	count += (ARRAY_SIZE - 1 - min_pos);

	cout << endl << count;
	return 0;
}

void move_max(int height[], int max_pos) {
	int temp = height[max_pos];

	for (int i = max_pos; i >0; i--)
		height[i] = height[i-1];

	height[0] = temp;
}

void move_min(int height[], int ARAY_SIZE,int min_pos) {
	int temp = height[min_pos];

	for (int i = min_pos; i < ARAY_SIZE; i++)
		height[min_pos] = height[i + 1];

	height[ARAY_SIZE - 1] = temp;
}