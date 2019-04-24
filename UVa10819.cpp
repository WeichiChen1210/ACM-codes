// DP practice
// UVa 10819
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define maxn 10005

int N, itemnum, sum = 0;
int S[110][maxn], W[110], P[110], S1[maxn];
bool use[110][maxn];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(cin >> N >> itemnum){
        for(int i = 1; i <= itemnum; i++)
            cin >> W[i] >> P[i];

        memset(S, 0, sizeof(S));
        memset(S1, 0, sizeof(S1));
        sum = 0;
        if(N > 1800) N += 200;
        // for(int i = 1; i <= itemnum; i++){
        //     for(int j = 1; j <= N; j++){
        //         if(j >= W[i]){
        //             S[i][j] = max(S[i-1][j], S[i-1][j-W[i]] + P[i]);
        //         }
        //         else    S[i][j] = S[i-1][j];
        //     }
        // }
        for(int i = 1; i <= itemnum; i++){
            for(int j = N; j >= W[i]; j--){
                S1[j] = max(S1[j], S1[j-W[i]] + P[i]);
            }
        }

        // for(int i = itemnum, j = N; i != 0; --i){
        //     if(S[i][j] == S[i-1][j]) continue;
        //     sum += W[i];
        //     j -= W[i];
        // }
        // cout << sum << " " << S[itemnum][N] <<endl;

        int f = N;
		while (f > 0 && S1[f] == S1[f-1]) -- f;
		if (f <= 2000 && N > 2000)
			cout << S1[N-200] << endl;
		else cout << S1[N] << endl;

    }
    return 0;
}