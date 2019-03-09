#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;
    vector<long long> K;
    vector<int> X;
    vector<long long> result;

    cin >> n;
    K.assign(n, 0);
    X.assign(n, 0);
    result.assign(n, 0);
    for(int i = 0; i < n; i++){
        cin >> K[i] >> X[i];
    }
    for(int i = 0; i < n; i++){
        //cout << K[i] << " " << X[i] << endl;
        long long sum = X[i];
        for(int j = 1; j < K[i]; j++){
            sum += 9;
        }
        result[i] = sum;
    }
    for(int i = 0; i < n; i++){
        cout << result[i] << endl;
    }

    return 0;
}