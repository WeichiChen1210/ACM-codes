#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int button[2], both = 0, decrease = 0, temp1, temp2;
    cin >> button[0] >> button[1];
    temp1 = button[0];
    temp2 = button[1];
    both = button[0] + button[1];
    decrease = max((button[0]-1)+temp1, temp2+(button[1]-1));
    cout << max(both, decrease);

    return 0;
}