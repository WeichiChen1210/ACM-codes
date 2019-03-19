#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, minnum = 0, maxnum = 0, d = 0, sum = 0, corsum = 0;
    vector<long long>p, q;
    cin >> n;
    p.assign(n, 0);
    q.assign(n-1, 0);

    for(long long i = 0; i < n-1; i++)
        cin >> q[i];
    p[0] = 0;
    for(long long i = 0; i < n-1; i++){
        p[i+1] = p[i] + q[i];
        minnum = min(minnum, p[i]);
    }
    // cout << minnum;
    d = abs(1 - minnum);
    for(long long i = 0; i < n; i++){
        p[i] += d;
        maxnum = max(maxnum, p[i]);
        sum += p[i];
        // cout << p[i] << " ";
    }
    // cout << (1+n)*n/2 << endl;
    // cout << sum << " " << corsum << endl;
    if(sum != ((1+n)*n/2))    cout << -1;
    else {
        for(long long i = 0; i < n; i++){
            cout << p[i] << " ";
        }
    }

    return 0;
}