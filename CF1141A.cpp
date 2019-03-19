#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c, d;
    int cnt = 0;
    cin >> a >> b;
    if(a == b){
        cout << 0 << endl;
        return 0;
    }
    c = b / a;
    d = b % a;
    if(d != 0){
        cout << -1 << endl;
        return 0;
    }

    while(1){
        if(c == 1){
            cout << cnt << endl;
            return 0;
        }
        if(c % 3 != 0){
            break;
        }
        else {
            c = c / 3;
            cnt++;
        }
    }
    while(1){
        if(c == 1){
            cout << cnt << endl;
            return 0;
        }
        if(c % 2 != 0){
            break;
        }
        else {
            c = c / 2;
            cnt++;
        }
    }
    if(c != 1) cout << -1 << endl;
    else cout << cnt << endl;
    // while(d == 0 && c != 1){
    //     c = c / 2;
    //     d = d / 2;
    // }




    return 0;
}