#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0, cnt = 0;
    vector<int> work;
    cin >> n;
    work.assign(n, 0);
    for(int i = 0; i < n; i++){
        cin >> work[i];
    }

    if(work[0] == 1 && work[n-1] == 1){
        cnt = 2;
        int i = 1;
        while(work[i] == 1){
            cnt++;
            i++;
        }
        i = n-2;
        while(work[i] == 1){
            cnt++;
            i--;
        }
        ans = max(ans, cnt);
    }
    cnt = 0;
    for(int i = 0; i < n; i++){
        // cout << i << endl;
        if(work[i] == 1){
            cnt++;
            ans = max(ans, cnt);
        }
        else if(work[i] == 0){
            cnt = 0;
        }
        // cout << "cnt " << cnt << endl;
        // cout << "ans " << ans << endl;
    }
    
    cout << ans << endl;

    return 0;
}