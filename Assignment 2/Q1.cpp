#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element)
            return i; 
    }
    return -1; 
}

int binarySearch(int arr[], int n, int element) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
            return mid;
        else if (arr[mid] < element)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, element;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    cout << "Sorted array using Bubble Sort:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    cout << "Enter element to search: ";
    cin >> element;

    int linResult = linearSearch(arr, n, element);
    if (linResult != -1)
        cout << "Linear Search: " << linResult + 1 << "\n";
    else
        cout << "Linear Search: Not found\n";

    int binResult = binarySearch(arr, n, element);
    if (binResult != -1)
        cout << "Binary Search: " << binResult + 1 << "\n";
    else
        cout << "Binary Search: Not found\n";

    return 0;
}
