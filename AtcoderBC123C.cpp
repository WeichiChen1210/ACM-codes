// not done, have a new way to implement
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<long long> vehicle;
    vector<long long> city;
    vehicle.assign(5, 0);
    city.assign(6, 0);
    long long people = 0, traveltime = 0;
    cin >> people;
    city[0] = people;
    for(int i = 0; i < 5; i++){
        cin >> vehicle[i];
    }
    // for(int i = 0; i < 6; i++){
    //     cout << city[i] << " ";
    // }
    // cout << endl;
    // for(int i = 0; i < 5; i++){
    //     cout << vehicle[i] << " ";
    // }
    cout << endl;
    bool empty = true;
    while(1){
        empty = true;
        for(int i = 4; i >= 0; i--){
            if(city[i] != 0){
                if(city[i] <= vehicle[i]){
                    city[i+1] += city[i];
                    city[i] = 0;
                }
                else {
                    city[i+1] += vehicle[i];
                    city[i] -= vehicle[i];
                }
                empty = false;
            }
        }
        if(empty)   break;
        traveltime++;
        // cout << traveltime << endl;
        // for(int i = 0; i < 6; i++){
        //     cout << city[i] << " ";
        // }
        // cout << endl;
    }
    cout << traveltime << endl;
    return 0;
}