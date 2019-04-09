#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k = 0;
    long int sum = 19;
    cin >> k;
    if(k == 1)  cout << 19;
    else if(k < 10){
        sum = 19;
        for(int i = 0; i < k-1; i++){
            sum += 9;
            cout << sum << endl;
        }
        cout << sum;
    }
    else{
        k -= 9;
        sum = 100;
        while(k != 0){
            sum++;
            int temp = 0, store = sum;
            while(sum != 0){
                temp += sum % 10; 
                sum /= 10;
            }
            cout << temp << endl;
            if(temp == 10);
        }
    }
    return 0;
}