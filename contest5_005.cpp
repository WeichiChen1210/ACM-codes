#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, offset = 0, maxsum = 0;
    cin >> n;
    map<string, int> num;
    vector<int> count;
    string input;
    for(int i = 0; i < n; i++){
        cin >> input;
        // num[input] = 0;
        num[input]++;
    }
    // cout << num.size() << endl;
    for(auto it = num.begin(); it != num.end(); it++){
        // cout << it->first << " => " << it->second << endl;
        count.push_back(it->second);
    }
    sort(count.begin(), count.end());
    
    int countsize = count.size();
    // for(int i = 0; i < countsize; i++){
    //     cout << count[i] << endl;
    // }
    if(countsize == 1){
        cout << n;
        return 0;
    }
    vector<int> copyCount(countsize);
    for(int i = 0; i < countsize; i++){
        copyCount[i] = count[i];
        // cout << copyCount[i] << endl;
    }
    count[countsize-1] = count[countsize-1]/2*2;
    int last = count[countsize-1];
    while(1){
        count[countsize-1] = last;
        int sum = count[countsize-1];
        count[countsize-1] -= offset;
        // cout << "offset " << offset << endl;
        if(count[countsize-1] <= 0) break;
        // cout << "last one " << count[countsize-1] << endl;

        for(int i = countsize-2; i >= 0; i--){
            if(count[i+1]%2 != 0 && count[i+1] != 1)   break;
            // cout << "%2 " << count[i+1]%2 << " " << count[i+1] << endl;
            int temp = count[i+1]/2;
            if(count[i] >= temp){
                count[i] = temp;
                sum += temp;

            }
            else break;
        }

        if(sum > maxsum)    maxsum = sum;
        for(int i = 0; i < countsize; i++){
            count[i] = copyCount[i];
        }
        offset += 2;
    }
    cout << maxsum;
    return 0;
}