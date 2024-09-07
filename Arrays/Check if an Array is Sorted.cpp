#include <iostream>

using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n]; 
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isSorted(arr, n)) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}

