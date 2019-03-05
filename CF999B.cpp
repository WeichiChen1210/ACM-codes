#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0, count = 1;
    string encrypted;
    cin >> n >> encrypted;

    while(count < n){
        if(n%count == 0){
            //cout << count << endl;
            string temp;
            temp.resize(count);
            for(int i = count-1; i >= 0; i--){
                temp[count-1-i] = encrypted[i];
            }
            for(int i = 0; i < count; i++){
                encrypted[i] = temp[i];
            }
            //cout << temp << endl;
            //cout << encrypted << endl;
        }
        count++;
    }
    reverse(encrypted.begin(), encrypted.end());
    cout << encrypted << endl;

    return 0;
}