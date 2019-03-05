// not done
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string chars = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string input;
    getline(cin, input);
    for(int i = 0; i < input.size(); i++){
        if(input[i] == ' ') cout << " ";
        else{
            int pos;
            pos = chars.find(input[i]);
            cout << chars[pos-1];
        }
    }

    return 0;

}