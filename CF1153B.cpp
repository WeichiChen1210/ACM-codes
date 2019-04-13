#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, h;
    cin >> n >> m >> h;
    vector<int> a(m);
    vector<int> b(n);
    vector<vector<int>> bricks(n, vector<int>(m, 0));
    for(int i = 0; i < m; i++)
        cin >> a[i];
    for(int i = 0; i < n; ++i)
        cin >> b[i];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j)
            cin >> bricks[i][j];
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(bricks[i][j] == 0) continue;
            if(b[i] == a[j]){
                bricks[i][j] = b[i];
            }
            else{
                bricks[i][j] = min(a[j], b[i]);
            }
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << bricks[i][j];
            if(j != m-1)    cout << " ";
        }
        if(i != n-1)    cout << endl;
    }
    return 0;
}