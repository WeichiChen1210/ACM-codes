#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> h;
    vector<long long> h_even;
    vector<long long> h_odd;
    h.assign(n, 0);
    h_even.assign(n/2, 0);
    if(n%2 != 0)    h_odd.assign(n/2+1, 0);
    else h_odd.assign(n/2, 0);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    sort(h.begin(), h.end());
    for(int i = 0, j = 0, k = 0; i < n; i++){
        if((i+1) % 2 == 0){
            h_even[j] = h[i];
            h[i] = 0;
            j++;
        }
        else {
            h_odd[k] = h[i];
            h[i] = 0;
            k++;
        }
    }
    reverse(h_even.begin(), h_even.end());
    int s = h_odd.size();
    for(int i = 0; i < n; i++){
        if(i < s){
            h[i] = h_odd[i];
        }
        else{
            h[i] = h_even[i-s];
        }
    }
    for(int i = 0; i < n; i++){
        cout << h[i] << " ";
    }
    return 0;
}