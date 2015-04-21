// bubble.cc -- Sample C++ program to be debugged with DDD
//
// This program reads 5 integer values into an array "data", and then
// uses a bubbleSort function to sort the array using the well-known
// bubble sort algorithm.
using namespace std;
#include <iostream>

// bubbleSort works over the array in "n" passes, where "n" is the
// size of the array. In each pass, the elements of the array are
// compared pairwise, and the larger is "pushed down" in the array.
// At the end of the first pass, the largest element is at the end
// of the array. The process is then repeated for the remaining n-1
// elements until the entire array is sorted.
void bubbleSort(int n, int dataArray[]) {
    int t;
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            if (dataArray[j-1] > dataArray[j]) {
               t = dataArray[j-1];
               dataArray[j-1] = dataArray[j];
               dataArray[j] = t;
            }
        }
    }
}



int main () {
    int n;
    int data[5];

    cout << "Enter the integers to sort: ";

    int count = n;
    for (int i=0 ; i < 5; ++i) cin >> data[i];

    bubbleSort(5, data);

    cout << "The sorted integers are: ";
    for (int i=0 ; i < 5; ++i) cout << data[i] << " ";
    cout << endl;

    return (0);
}

