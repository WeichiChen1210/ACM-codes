#include <bits/stdc++.h>
using namespace std;

int n, answer = 0, zans = 0;
vector<int> a, b;
map< pair<int, int>, int> c;
int x, y, z;

int gcd(int a, int b){
    while(a != 0 && b != 0){
        if(a >= b) a = a % b;
        else if(a < b)  b = b % a;
    }

    if(a == 0) return b;
    else if(b == 0) return a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    cout << n << endl;
    a.resize(n);
    b.resize(n);
    for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(int i = 0; i < n; i++)
		scanf("%d", &b[i]);
    
    for(int i = 0; i < n; ++i){
        if(a[i] == 0){
            if(b[i] == 0)
                zans++;
            continue;
        }
        x = a[i];
        y = b[i];
        z = gcd(x, y);
        x = x / z;
        y = y / z;
        c[make_pair(x, y)]++;
        answer = max(answer, c[make_pair(x, y)]);
    }

    cout << answer + zans << endl;


    return 0;
}