#include <iostream>


using namespace std;

int binarySearch(int array[], int x, int size) {
	int start = 0;
	int end = size - 1;
	for (int i = 0; i < size; i++) {
		cout << array[i] << " arrary is successfully input " << endl;
	}
	while (end >= start) {
		int mid = (start + end) / 2;
		cout << "mid = " << mid << " " << "start = " << start << " " << "end = "  <<end << " " << endl;
		
		if (x == array[mid]) {
			return mid;
		}
		else if (x < array[mid]) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return -1;
}

int main()
{
	int inputArray[7] = { 2, 4, 5, 7, 12, 14, 17 };
	int size = sizeof(inputArray)/sizeof(inputArray[0]);
	cout << "the size is " << size << endl;
	int inputNumber;
	cout << "Type the number you want to search : ";
	cin >> inputNumber;
	int index = binarySearch(inputArray, inputNumber, size);
	cout << "The search result is : " << index << endl;
}


