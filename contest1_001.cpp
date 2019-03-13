#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, maxnum = 0, length = 0, count = 0;
    cin >> n;
    vector<int> a;
    a.assign(n, 0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        maxnum = max(maxnum, a[i]);
    }
    for(int i = 0; i < n; ++i){
        count = 0;
        if(a[i] == maxnum){
            while(a[i] == maxnum && i < n){
                count++;
                i++;
            }
        }
        length = max(length, count);
    }

    cout << length;
    return 0;
}