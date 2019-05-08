#include <bits/stdc++.h>
using namespace std;

// struct node{
//     int id, w;  // id := vertex number, w := weight
//     bool operator<(const node &rhs) const{
//         return w > rhs.w;   // make priority_queue be min heap
//     }
// };

struct edge{
    int u, v;
    double w;    // u := start vertex number, v := end vertex, w := weight
    // bool operator<(const node &rhs) const{
    //     return w > rhs.w;   // make priority_queue be min heap
    // }
} E[10000];

struct coor{
    int x;
    int y;
} C[10000];

int group[10000];

bool cmp(const edge &A, const edge &B){
    return A.w < B.w;
}

int Find(int v){
    if(v == group[v])   return v;
    return group[v] = Find(group[v]);
}

void Union(int u, int v){
    group[Find(u)] = Find(v);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s, p;
    cin >> n;
    // vector<struct edge> E;
    // vector<struct coor> C;

    while(n > 0){
        scanf("%d %d", &s, &p);
        for(int i = 0; i < p; i++){
            scanf("%d %d", &C[i].x, &C[i].y);
            group[i] = i;
        }
        cout << "first\n";
        int count = 0;
        for(int v = 0; v < p; v++){
            for(int u = v+1; u < v; u++){
                double dist = sqrt(pow(C[u].x-C[v].x, 2)+pow(C[u].y-C[v].y, 2));
                E[count++] = {u, v, dist};
            }
        }
        cout << "before sort\n";
        // sort(E.begin(), E.end(), [&](edge A, edge B) {return A.w < B.w;});
        sort(E, E+count, cmp);

        vector<double> D;
        for(edge e: E){
            int a = Find(e.u), b = Find(e.v);
            if(a != b){
                D.push_back(e.w);
                Union(e.u, e.v);
            }
        }
        printf("%.2f\n", D[p-s-1]);
        n--;
    }

    return 0;
}