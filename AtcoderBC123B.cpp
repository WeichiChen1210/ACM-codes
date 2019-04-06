#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector< vector<short> > dish;
    vector<short> diff;
    dish.assign(5, vector<short>(2,0));
    int servetime = 0;
    for(int i = 0 ; i < 5; i++){
        cin >> dish[i][1];
        if(dish[i][1] % 10 == 0){
            dish[i][0] = 0;
        }
        else {
            dish[i][0] = (dish[i][1] / 10 + 1) * 10 - dish[i][1];
        }
    }
    
    sort(dish.begin(), dish.end());
    // for(int i=0; i< 5;i++){
    //     cout << dish[i][0] << " " << dish[i][1] << endl;
    // }
    
    for(int i = 0; i < 5; ++i){
        if(dish[i][0] == 0 || i == 4){
            servetime += dish[i][1];
        }
        else {
            servetime += (dish[i][0] + dish[i][1]);
        }
        // cout << servetime << endl;
    }

    cout << servetime << endl;
    return 0;
}