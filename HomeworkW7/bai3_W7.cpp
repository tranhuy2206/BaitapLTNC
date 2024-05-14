#include <bits/stdc++.h>
using namespace std;



int power(int a, int b){
    int res = 1;
    for (int i = 1; i <= b; i++){
        res *= a;
    }
    return res;
}

int powersum1(int x, int n, int k){
    int smallest_power = power(k,n);
    if (smallest_power > x) return 0;
    if (smallest_power == x) return 1;
    return (powersum1(x-smallest_power,n,k+1)+powersum1(x,n,k+1));
}

int powerSum(int X, int N) {
    return powersum1(X,N,1);
}
