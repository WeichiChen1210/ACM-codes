// not done
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vector<short> L;
    vector<short> count;
    count.assign(100, 0);

    cin >> n;
    L.assign(n, 0);
    //sorted.assign(n, 0);

    for(int i = 0; i < n; i++){
        cin >> L[i];
    }

    for(int i = 0; i < n; i++){
        count[--L[i]]++;
    }
    int index = 0;
    for(short i = 0; i < 100; i++){
        //cout << count[i] << " ";
        while(count[i] > 0){
            L[index++] = i+1;
            count[i]--;
        }
    }


    for(int i = n-1; i >= 0; i--){
        cout << L[i] << " ";
    }

    return 0;
}