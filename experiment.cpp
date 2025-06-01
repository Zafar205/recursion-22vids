#include <bits/stdc++.h>
using namespace std;

void test(int n){
    if (n==0){
    //    printf("emptying");
        return;
    }
    printf("%d ", n);
    test(n-1);
    printf("emptying ");
}

int main(){
    test(5);
}