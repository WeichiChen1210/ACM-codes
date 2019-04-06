#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<short> pos;
    pos.assign(5, 0);
    for(int i = 0; i < 5; ++i){
        cin >> pos[i];
    }
    short k;
    cin >> k;
    bool flag = true;
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(pos[j]-pos[i] > k){
                flag = false;
                break;
            }
        }
        if(!flag)   break;
    }
    if(flag)    cout << "Yay!" << endl;
    else cout << ":(" << endl;
    return 0;
}