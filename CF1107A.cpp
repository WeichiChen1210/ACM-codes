#include <bits/stdc++.h>
using namespace std;

int n = 0;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for(int i = 0; i < n; i++) {
        int bits = 0;
        string a;
        string b;

        cin >> bits;
        cin >> a;
        // cout << bits << " " << a << endl;
        if(bits == 1){
            cout << "NO\n";
            continue;
        }

        b = a.substr(0,1);
        // cout << b << " " << a << endl;
        
        if((bits-1) > 1){
            cout << "YES\n" << "2\n" << b << " ";
            b = a.substr(1,bits-1);
            cout << b << endl;
        }
        else if(bits == 2){
            a = a.substr(1,bits-1);
            if(stoi(b) < stoi(a)){
                cout << "YES\n" << "2\n" << b << " " << a << endl;
            }
            else cout<< "NO" << endl;
        }
    }

    return 0;
}