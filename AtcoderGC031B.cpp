#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long int n;
    cin >> n;
    vector<long int> stone;
    stone.assign(n, 0);
    for(long int i = 0; i < n; ++i){
        cin >> stone[i];
    }

    for(long int i = 0; i < n; ++i){
        long int j = i+2;
        while(j < n){
            if(stone[j] == stone[i]){
                
            }
            j++;
        }
    }


    return 0;
}