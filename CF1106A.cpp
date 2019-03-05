#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0, count = 0;
    cin >> n;

    vector< vector<char> > M;
    M.assign(n, vector<char>(n,0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> M[i][j];
        }
    }

    for(int i = 1; i < n-1; i++){
        for(int j = 1; j < n-1; j++){
            if(M[i][j] == 'X' && M[i-1][j-1] == 'X' && M[i-1][j+1] == 'X' && M[i+1][j-1] == 'X' && M[i+1][j+1] == 'X')
                count++;
        }
    }

    cout << count << endl;


}