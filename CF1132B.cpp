#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n = 0, coupons = 0;
    vector<long long> price;
    vector<long long> q;

    cin >> n;
    price.assign(n, 0);
    for(long long i = 0; i < n; i++){
        cin >> price[i];
    }
    cin >> coupons;
    q.assign(coupons, 0);
    for(long long i = 0; i < coupons; i++){
        cin >> q[i];
    }

    sort(price.begin(), price.end());
    //reverse(price.begin(), price.end());
    long long sum = 0;

    for(long long j = 0; j < price.size(); j++){
        sum += price[j]; 
    }
    long long temp = sum;
    for(long long i = 0; i < coupons; i++){
        sum = temp;
        sum -= price[n-q[i]];
        cout << sum << endl;
    }
    
    
    return 0;
}