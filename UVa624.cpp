// DP practice
// UVa624
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define maxn 10005
int S[25][maxn], W[25], P[25];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, tracknum;
    // N is the max length of tape(max weight)
    // tracknum is the numbers of tracks(how many kinds of items)
    while(cin >> N >> tracknum){
        memset(S, 0, sizeof(S));
        memset(W, 0, sizeof(W));
        memset(P, 0, sizeof(P));
        for(int i = 1; i <= tracknum; i++){
            cin >> W[i];
            // here the weights and the values of the tracks are the same
            P[i] = W[i];
        }
        
        // for each kind of items
        for(int i = 1; i <= tracknum; i++){
            // for each weight
            for(int j = 1; j <= N; j++){
                // if the weight(W[i]) is able to be put in,
                if(j >= W[i]){
                    // compare the value of to put or not to put
                    S[i][j] = max(S[i-1][j], S[i-1][j-W[i]] + P[i]);
                }
                // else not able to be put in
                else    S[i][j] = S[i-1][j];
            }
        }
        // for(int i = 1; i <= tracknum; i++){
        //     for(int j = 1; j <= N; j++){
        //         cout << S[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;

        stack<int> st;
        for(int i = tracknum, j = N; i != 0;--i)
        {
            if(S[i][j] == S[i-1][j]) continue;
            st.push(W[i]);
            j -= W[i];
        }
        while(st.size()) cout << st.top() << ' ', st.pop();
        cout << "sum:" << S[tracknum][N] << endl;

    }

    return 0;
}