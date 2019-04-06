#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long int n, maxwalk = 0, temp = 0;
    cin >> n;
    vector<long int> colors;
    colors.assign(n, 0);

    for(long int i = 0; i < n; ++i){
        cin >> colors[i];
    }
    if(colors[0] != colors[n-1]){
        maxwalk = n-1;
    }
    else {
        for(long int i = n-2; i >= 0; --i){
            if(colors[i] != colors[0]){
                maxwalk = i;
                break;
            }
        }
        for(long int i = 0; i < n; ++i){
            if(colors[i] != colors[n-1]){
                maxwalk = max(maxwalk, n-1-i);
                break;
            }
        }
    }
    cout << maxwalk << endl;
    return 0;
}