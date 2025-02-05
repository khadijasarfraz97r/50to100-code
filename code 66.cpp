// This program calculates and prints the average of all elements in an array.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / n;
    cout << "Average of elements in the array is: " << average << endl;
    return 0;
}
