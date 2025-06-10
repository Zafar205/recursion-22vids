#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // First element as pivot
    int i = low;
    int j = high;

    while (i < j) {
        // Move j left until finding an element smaller than pivot
        while (i < j && arr[j] >= pivot) j--;
        // Move i right until finding an element greater than pivot
        while (i < j && arr[i] <= pivot) i++;
        // Swap if i and j haven't crossed
        if (i < j) swap(arr[i], arr[j]);
    }

    // Place pivot in the correct position
    swap(arr[low], arr[i]);
    return i; // Pivot's final index
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partition index
        quickSort(arr, low, pi - 1);        // Sort left part
        quickSort(arr, pi + 1, high);       // Sort right part
    }
}

int main() {
    vector<int> arr = {5, 3, 8, 4, 2};

    quickSort(arr, 0, arr.size() - 1);

    for (int x : arr) cout << x << " ";
    return 0;
}
