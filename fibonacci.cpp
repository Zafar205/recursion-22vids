#include <bits/stdc++.h>
using namespace std;


int fib(int n){
    if(n<=1){
        return n;
    }
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