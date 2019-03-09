#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n = 0;
    vector<int> num;
    queue<int> q;

    while(1){
        cin >> n;
        if(n == 0)  break;
        else num.push_back(n);
    }
    cout << num.size() << endl;
    for(int i = 0; i < num.size(); i++){
        for(int j = 0; j < num[i]; j++){
            q.push(j+1);
        }
        // while(q.size()>0){
        //     cout << q.front() << endl;
        //     q.pop();
        // }
        // int temp = 0;
        // while(q.size() > 1){
        //     cout << q.front();
        //     q.pop();
        //     temp = q.front();
        //     q.pop();
        //     q.push(temp);
        //     if(q.size() == 1){
        //         cout << endl;
        //         break;
        //     }
        //     else cout << ", ";
        // }
        // cout << q.front();

    }


    return 0;
}