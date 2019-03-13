#include <bits/stdc++.h>
using namespace std;

// recursive
int findGCD(int a, int b){
    if(b == 0)  return a;
    else return findGCD(b, a % b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    // cout << findGCD(a, b) << endl; // recursive
    while(a != 0 && b != 0){
        if(a >= b) a = a % b;
        else if(a < b)  b = b % a;
    }

    if(a == 0) cout << b << endl;
    else if(b == 0) cout << a << endl;

    return 0;
}