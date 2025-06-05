#include <bits/stdc++.h>
using namespace std;

void print_num_rev(int n){
    if (n==0){
        return;
    }
    printf("%d\n",  n);
    print_num_rev(n-1);


}   
void print_num_for(int n){
    if (n==0){
        return;
    }
    print_num_for(n-1);
    printf("%d\n",  n);


}   


int main(){
    int n = 10;
    print_num_rev(n);
    printf("\n");
    print_num_for(n);
}