#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    char p[n];
    vector< vector<int>> zeros(n, vector<int>(2, 0));
    int count = 0, index = 0;
    for(int i = 0; i < n; ++i){
        cin >> p[i];
        zeros[i][1] = 0;
        zeros[i][0] = 0;
        if(p[i] == '0'){
            count++;
        }
        else {
            if(count != 0){
                zeros[index][1] = i-count;
                zeros[index][0] = count;
                count = 0;
                index++;
            }
        }
    }
    for(int i = 0; i < index; ++i){
        cout << zeros[i][0] << " at " << zeros[i][1] << endl;
    }
    zeros.resize(index);
    sort(zeros.begin(), zeros.end());
    reverse(zeros.begin(), zeros.end());
    for(int i = 0; i < index; ++i){
        cout << zeros[i][0] << " at " << zeros[i][1] << endl;
    }
    return 0;
}