#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = 6;

    int largest = 0;
    int second = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second largest = " << second << endl;

    return 0;
}