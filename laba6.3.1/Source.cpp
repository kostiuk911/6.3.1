#include<iostream>
using namespace std;

int Search(int* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		 {

			cout << "[" << arr[i] << "]";
		}
	}
	return 0;
}
int Min(int* arr, int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[0]) {
			min = arr[i];

		}
	}
	return min;
}


int main() {

	const int size = 20;
	int arr[size] = { 1,43,21,4,2,6,23,5,29,58,6,5,89,3,2,66,25,34,45 };
	Search(arr, size);
	cout << endl;
	cout << "Min = " << Min(arr, size);

}