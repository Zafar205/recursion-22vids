#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int>& arr) {
    if (arr.size() <= 1) return;

    int mid = arr.size() / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());

    mergeSort(left);
    mergeSort(right);

    arr.clear();
    
    int i = 0, j = 0;
    while(i < left.size() && j < right.size()) {
        if(left[i] < right[j]) arr.push_back(left[i++]);
        else arr.push_back(right[j++]);
    }
    while(i < left.size()) arr.push_back(left[i++]);
    while(j < right.size()) arr.push_back(right[j++]);
}

int main() {
    vector<int> arr = {5, 3, 8, 4, 2};
    mergeSort(arr);
    for(int x : arr) cout << x << " ";
    return 0;
}
