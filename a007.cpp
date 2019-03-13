#include <bits/stdc++.h>
using namespace std;

int m, n, cnt = 0;
char plot[101][101];

void dfs(int r, int c){
    if(plot[r][c] == '*') return;
    plot[r][c] = '*';

    for(int k = -1; k <= 1; ++k){
        for(int l = -1; l <= 1; ++l){
            if(r+k >= 0 && r+k < m && c+l >= 0 && c+l < n)
                dfs(r+k, c+l);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    while(cin >> m >> n){
        if(m == 0 && n == 0)    break;
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                cin >> plot[i][j];
            }
        }
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(plot[i][j] == '@'){
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}