#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <long long> cnt;
    cnt.assign(4, 0);

    cin >> cnt[0] >> cnt[1] >> cnt[2] >> cnt[3];

    if(cnt[0] == 0 && cnt[1] == 0 && cnt[2] == 0 && cnt[3] == 0 ) cout << 1 << endl;
    else {
        if(cnt[0] == cnt[3]){
            if(cnt[0] == 0 && cnt[3] == 0 && cnt[2] > 0) cout << 0 << endl;
            else cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}