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

    for(int i = 0; i < num.size(); i++){
        for(int j = 0; j < num[i]; j++){
            q.push(j+1);
        }
        if(q.size() == 1){
            cout << "Discarded cards:";
            cout << "\n" << "Remaining card: " << q.front() << "\n";
            q.pop();
            continue;
        }
        cout << "Discarded cards: ";
        while(q.size() > 1){
            cout << q.front();
            q.pop();
            if(q.size() > 1)    cout << ", ";
            else break;
            int temp = 0;
            temp = q.front();
            q.push(temp);
            q.pop();
        }
        cout << "\n" << "Remaining card: " << q.front() << "\n";
        q.pop();
    }
    return 0;
}