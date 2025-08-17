#include <iostream>
using namespace std;

int findMissingLinear(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != i + 1)
            return i + 1;
    }
    return n;
}

int findMissingBinary(int arr[], int n) {
    int low = 0, high = n - 2;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == mid + 1) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low + 1;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n - 1 << " sorted elements:\n";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << "Missing number (Linear): " << findMissingLinear(arr, n) << "\n";
    cout << "Missing number (Binary): " << findMissingBinary(arr, n) << "\n";

    return 0;
}
