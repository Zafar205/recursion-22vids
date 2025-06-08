#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int fac(ll x){
 if(x <=1){
    return 1;
 }else{
    return x*fac(x-1);
 }
}

int main(){
    cout << fac(6);
    return 0;
}