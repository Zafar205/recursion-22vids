#include <bits/stdc++.h>
using namespace std;

int count_subsequence(int idx, vector<int> &arr ,int sum, int k, int size){
    if(idx == size){
        if(sum == k) return 1;
        return 0;
    }

    sum += arr[idx];
    int l = count_subsequence(idx+1, arr, sum, k , size); 
    sum -= arr[idx];
    int r = count_subsequence(idx+1, arr, sum, k , size);

    return l+r;
}

int main(){
    vector<int> test={1,2,3};
    int k=1;
    cout << count_subsequence(0, test, 0, k, 3);
    return 0;
}