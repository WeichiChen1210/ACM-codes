// DP
// UVa 10980
#include <bits/stdc++.h>
using namespace std;
#define maxn 110


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int cases = 1, m;
	int W[30];
	double S[maxn], P[30], unit;

	while(cin >> unit >> m){
		int temp;
		string str;
		memset(W, 0, sizeof(W));
		memset(P, 0, sizeof(P));
		memset(S, 0, sizeof(S));
		for(int i = 1; i <= m; i++){
			cin >> W[i] >> P[i];
		}
		getline(cin, str);
		
		for(int i = 1; i <= maxn; i++)
			S[i] = unit * i;

		for(int i = 1; i <= m; i++){
			for(int j = W[i]; j <= maxn; j++)
				S[j] = min(S[j], S[j-W[i]] + P[i]);
		}
		cout << "Case " << cases++ << ":" << endl;
		
		stringstream sin(str);
		while(sin >> temp){
			printf("Buy %d for %.2lf\n", temp, S[temp]);
		}
		
	}

	return 0;
}
