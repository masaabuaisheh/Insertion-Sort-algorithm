#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Prompt the user to enter the size of the array
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    // Use vector instead of a variable-length array
    vector<int> a(n);

    // Prompt the user to enter the elements of the array
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Perform Insertion Sort
    for (int i = 1; i < n; i++) {
        int temp = a[i]; // Store the current element to be inserted
        int j = i - 1;   // Initialize j to the index before i

        // Compare the current element with elements before it and shift larger elements to the right
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }

        // Insert the current element into its correct position
        a[j + 1] = temp;
    }

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
