// not done yet
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    

    long long W = 0;
    vector<long long> cnt;
    cnt.assign(8, 0);

    cin >> W;
    for(int i = 0; i < 8; i++){
        cin >> cnt[i];
    }

    if(cnt[0] == 0 && cnt[1] == 0 && cnt[2] == 0 && cnt[3] == 0 && cnt[4] == 0 && cnt[5] == 0 && cnt[6] == 0 && cnt[7] == 0) cout << 0 << endl;
    else{
        for(int i = 0; i < 8; i++){
            if(cnt[i] == W){
                cout << W << endl;
                return 0;
            }
        }

        for(int i = 0; i < 8; i++){
            for(int j = i+1; j < 8; j++){
                if(cnt[i]+cnt[j] == W){
                    cout << W << endl;
                    return 0;
                }
            }
        }
    }

}