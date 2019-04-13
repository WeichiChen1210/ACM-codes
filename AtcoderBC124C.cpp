#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string color;
    // char tiles[10010];
    cin >> color;
    int len = color.length();
    if(len == 1){
        cout << 0;
        return 0;
    }
    char one = '1', zero = '0';
    int ansone = 0, anszero = 0;
    for(int i = 0; i < len; i++){
        if(color[i] == one) anszero++;
        else if(color[i] == zero) ansone++;
        char temp = one;
        one = zero;
        zero = temp;
    }
    // cout << anszero << " " << ansone << endl;
    cout << min(ansone, anszero) << endl;
    
    return 0;
}