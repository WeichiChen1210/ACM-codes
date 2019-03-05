#include <bits/stdc++.h>

using namespace std;

vector<int> A;
int N;

int main(){
    cin >> N;
    A.resize(N);
    for(int i = 0; i < N; i++)
        cin >> A[i];
    sort(A.begin(), A.end());
    for(int i = 0; i < N; i++)
        cout << A[i] << " ";
    cout << endl;
    return 0;
}