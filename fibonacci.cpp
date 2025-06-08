#include <bits/stdc++.h>
using namespace std;


int fib(int n){
    if(n<=1){
        return n;
    }
    // at first fib(n-1) will complete and only after that fib(n-2) will be completed
    // here every function call will call 2 functions fib(n-1) and fib(n-2), so it 
    // be almost 2^n (exponential), the reason its not exactly 2^n, bcz in some calls we will
    // hit base case so in that particular scenario we will not be calling 2 funcs,
    // that's why we have in total of 9 elements in the recursion tree of fib(4)
    return fib(n-1) + fib(n-2);

}

void n_fib(int num){
    for(auto i = 0 ; i <= num ; ++i){
        cout << fib(i) << " ";
    }
}

int main(){
    n_fib(10);
}