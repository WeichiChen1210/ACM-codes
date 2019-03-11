#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int chapter = 0, mark = 0, remain = 0;;
    cin >> chapter;
    vector< vector<int> > pages;
    pages.assign(chapter, vector<int>(2, 0));
    for(int i = 0; i < chapter; i++){
        cin >> pages[i][0] >> pages[i][1];
    }
    cin >> mark;

    // for(int i = 0; i < chapter; i++){
    //     cout << pages[i][0] << " " << pages[i][1] << endl;
    // }
    // cout << mark << endl;

    for(int i = 0; i < chapter; i++){
        if(mark == pages[i][0] || mark == pages[i][1] || (mark > pages[i][0] && mark < pages[i][1])){
            remain = chapter - i;
            break;
        }
    }
    cout << remain;
    return 0;
}