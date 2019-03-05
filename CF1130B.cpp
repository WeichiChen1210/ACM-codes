#include <bits/stdc++.h>
#include <cmath>
using namespace std;

vector< vector<int> > a;
int n = 0;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    a.assign(2*n, vector<int>(2,0));
    
    for(int i = 0; i < 2*n; i++){
        int location, item;
        location = i + 1;
        cin >> item;
        a[i][0] = item;
        a[i][1] = location;
    }

    sort(a.begin(), a.end());

    // for(int i = 0; i < 2*n; i++) {
    //     cout << a[i][0] << " " << a[i][1] << endl;
    // }

    long long suma = 0, sumb = 0;
    for(int i = 0; i < 2*n-2; i+=2){
        suma += abs(a[i+2][1] - a[i][1]);
        sumb += abs(a[i+1+2][1] - a[i+1][1]);
        // cout << i << " " << suma << " " << sumb <<endl;
    }

    sumb += a[1][1] - 1;
    suma += a[0][1] - 1;

    cout << suma + sumb << endl;
    return 0;
}