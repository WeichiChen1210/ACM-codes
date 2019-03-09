#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h1, m1, h2, m2;
    string t1, t2;

    cin >> t1 >> t2;
    h1 = stoi(t1.substr(0, 2));
    m1 = stoi(t1.substr(3, 2));
    h2 = stoi(t2.substr(0, 2));
    m2 = stoi(t2.substr(3, 2));

    // cout << h1 <<" "<< m1 <<endl;
    // cout << h2 <<" "<< m2 <<endl;

    if(h1 == h2){
        int temp = (m1 + m2) / 2;
        if(h1 < 10) cout << 0 << h1 << ":";
        else cout << h1 << ":";
        if(temp < 10) cout << 0 << temp << endl;
        else cout << temp << endl;
    }
    else{
        int temp = (60 - m1) + 60 * (h2 - (h1 + 1)) + m2;
        temp = temp / 2;
        // cout <<temp / 60<<endl;
        int h = h1 + temp /60;
        // cout << h <<endl;
        int m = m1 + temp % 60;

        h += m / 60;
        m = m % 60;
        if(h < 10) cout << 0 << h << ":";
        else cout << h << ":";
        if(m < 10) cout << 0 << m << endl;
        else cout << m << endl;
    }
    return 0;
}