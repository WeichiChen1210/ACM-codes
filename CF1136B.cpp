#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0, k = 0, moves = 0;
    cin >> n >> k;
    moves += 2 * n + 2;
    if(n == 2){
        cout << moves;
        return 0;
    }
    int s = k - 1, b = n - k;
    if(k == 1 || k == n){
        moves += (n - (k+1));
    }
    else if(s > b){
        moves += (n - (k+1));
        moves += (n - 1);
    }
    else if(s < b){
        moves += (k - 1)-1;
        moves += (n - 1);
    }
    else if(s == b){
        k -= 1;
        moves += (k - 1);
        moves += (n - 1);
    }
    
    cout << moves;

    return 0;
}