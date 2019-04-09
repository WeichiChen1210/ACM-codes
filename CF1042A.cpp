#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, people, maxpeople = 0;
    long int sum = 0, left = 0;
    cin >> n;
    cin >> people;
    vector<int> benches;
    benches.assign(n, 0);
    for(int i = 0; i < n; i++){
        cin >> benches[i];
        maxpeople = max(maxpeople, benches[i]);
        sum += benches[i];
    }
    if(n == 1){
        cout << people+benches[0] << " " << people+maxpeople;
    }
    else{
        left = (maxpeople*n)-sum;
        if(left >= people){
            cout << maxpeople << " " << people+maxpeople;
        }
        else{
            if((sum+people)%n != 0)
                left = (sum+people)/n + 1;
            else left = (sum+people)/n;
            cout << left << " " << people+maxpeople;
        }
    }

    return 0;
}