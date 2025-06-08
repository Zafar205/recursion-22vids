#include <bits/stdc++.h>
using namespace std;
/*
usually we use subsets and subsequences interchangeably but subsequences maintains the order array
e.g
[1,2,3]
subsequences : [1,3] [2,3] 
subsets : [3,1] [2,1]
*/


/*
sum of subsequence is equal to k
*/

void print_subsequences(int idx, vector<int> &arr, vector<int> &subsequence, int size, int k){
    if(idx >= size){
        if ( accumulate(subsequence.begin(), subsequence.end(), 0) == k){
        cout << "[ " ;
        for(const auto& e : subsequence){
            cout << e << " ";
        } 
        cout << "]"  << endl;
    }
        return;

    }else{
        subsequence.push_back(arr[idx]); // take into ur subsequence
        print_subsequences(idx+1, arr, subsequence, size, k);
        subsequence.pop_back(); // not take into ur subsequence
        print_subsequences(idx+1, arr, subsequence, size, k);
    }
}

//another form

void sum_of_sequences(int idx, vector<int> &arr, vector<int> &sub, int size, int k, int sum){
    if(idx == size){

        if(sum == k){
            cout << "[ " ;
            for(const auto& e : sub) cout << e << " ";
            cout << "]"  << endl;
        }

    }else{
        sub.push_back(arr[idx]);
        sum += arr[idx];

        sum_of_sequences(idx+1, arr, sub, size, k, sum);

        sub.pop_back();
        sum -= arr[idx];

        sum_of_sequences(idx+1, arr, sub, size, k, sum);
    }
}

int main(){
    vector<int> test = {1,2,3};
    vector<int> sub;
    // time complexity 2^n * n(printing array)
    print_subsequences(0, test, sub, test.size(), 3);
    sum_of_sequences(0, test, sub, test.size(), 3, 0);
    return 0;
}
/*
I can use this code to generate all the possible subsequences and all the possible subsets of a particular vector
to generate permutations i'll look into the ways to modify this particular code
*/