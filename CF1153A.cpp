#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, bus = 0, temp = 100001;
    cin >> n >> t;
    int routes[n+10][2];
    for(int i = 0; i < n; i++){
        cin >> routes[i][0] >> routes[i][1];
    }
    for(int i = 0; i < n; i++){
        int time = routes[i][0];
        while(time < t){
            time += routes[i][1];
        }
        if(time < temp) {
            temp = time;
            bus = i;
        }
    }
    cout << bus+1;
    return 0;
}