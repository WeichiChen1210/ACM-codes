#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, temp = 0;
    vector<int> count;

    cin >> n;
    
    count.assign(110, 0);

    for(int i = 0; i < n; i++){
        cin >> temp;
        count[temp]++;
    }

    for(int i = 100; i >= 0; --i){
        while(count[i] > 0){
            cout << i << " ";
            count[i]--;
        }
    }

    return 0;
}