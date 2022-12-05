#include "../definitions.h"

// Array to store the next element in the chain of
// the set
vi link (n+1);


// Array to store the size of the corresponding set 
// of each representative
vi size_set (n+1);

// Just to ignore errors
int loops(){
    for (int i = 1; i <= n; i++) link[i] = i;
    for (int i = 1; i <= n; i++) size_set[i] = 1;
}

// Returns the representative of x
int find(int x){
    while(x != link[x]) x = link[x];
    return x;
}
// Check if the elements belong to same set
bool same(int a, int b){
    return find(a) == find(b);
}
// Join the sets of elements a and b
void unite(int a, int b){
    a = find(a);
    b = find(b);
    if (size_set[a] < size_set[b]) swap(a, b);
    size_set[a] += size_set[b];
    link[b] = a;
}

// Kruskal's algorithm
// First sort the edge array by their min weigth
vector<tiii> edges;
void kruskal(){
    for (int i = 0; i < edges.size(); i++){
        int a = get<0>(edges[i]), b = get<1>(edges[i]);
        if (!same(a, b)) 
            unite(a, b);
    }
}




