#include <bits/stdc++.h>
using namespace std;
/*
usually we use subsets and subsequences interchangeably but subsequences maintains the order array
e.g
[1,2,3]
subsequences : [1,3] [2,3] 
subsets : [3,1] [2,1]
*/

void print_subsequences(int idx, vector<int> &arr, vector<int> &subsequence, int size){
    if(idx >= size){
        cout << "[ " ;
        for(const auto& e : subsequence){
            cout << e << " ";
        } 
        cout << "]"  << endl;
        return;

    }else{
        subsequence.push_back(arr[idx]); // take into ur subsequence
        print_subsequences(idx+1, arr, subsequence, size);
        subsequence.pop_back(); // not take into ur subsequence
        print_subsequences(idx+1, arr, subsequence, size);
    }
}
int main(){
    vector<int> test = {1,2,3};
    vector<int> sub;
    print_subsequences(0, test, sub, test.size());
    return 0;
}
/*
I can use this code to generate all the possible subsequences and all the possible subsets of a particular vector
to generate permutations i'll look into the ways to modify this particular code
*/