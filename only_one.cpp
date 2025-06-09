#include <bits/stdc++.h>
using namespace std;

bool at_least_one_subsequence(int idx, vector<int> &arr, vector<int> &sub, int size, int sum, int k){
    if(idx == size){
        if(k == sum){
            cout << "[ " ;
            for(const auto& e : sub) cout << e << " ";
            cout << "]"  << endl;
            return true;
        }
        return false;
    }
    
    sub.push_back(arr[idx]);
    sum += arr[idx];
    

    if(at_least_one_subsequence(idx+1, arr, sub, size, sum, k)) return true;

    sub.pop_back();
    sum -= arr[idx];

    if(at_least_one_subsequence(idx+1, arr, sub, size, sum, k)) return true;
    return false;
}

int main(){
    vector<int> test = {1,2,3};
    vector<int> sub;
    at_least_one_subsequence(0, test, sub, test.size(), 0, 3);
    return 0;
}