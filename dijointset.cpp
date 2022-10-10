#include<bits/stdc++.h>
using namespace std;

class DSU {
    vector<int> parent, rank;
public:
    DSU(int n) {
        parent.resize(n+1);
        rank.resize(n+1);
    }

    void make_set(int v) {
        parent[v] = v;
        rank[v] = 0;
    }
    int find_set(int v) {
        if(parent[v] == v)
            return v;
        return parent[v] = find_set(parent[v]);
    }
    void union_set(int a, int b) {
        a = find_set(a);
        b = find_set(b);
        if (a != b) {
            if (rank[a] < rank[b])
                swap(a, b);
            parent[b] = a;
            if (rank[a] == rank[b])
                rank[a]++;
        }
    }
};

int main()
{
     
    return 0;
}
