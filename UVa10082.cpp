#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    string chars = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char input;
    while((input = getchar()) != EOF )
    {
        if( input == ' ' || input == '\n' ) cout << input;
        else {
            int i;
            for(i = 0 ; chars[i] != input; i++);
            cout << chars[i-1];
        }
    }
    return 0;

}