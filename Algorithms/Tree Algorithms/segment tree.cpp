#include <bits/stdc++.h>
 
using namespace std;

// Build the segment tree
void st_build(vector<int>& st, int no, int i, int j){
    // Value of the leaf
    if (i == j){
        st[i] = 0;
        return;
    }
    // Recursion to create tree
    int mid = (i + j) / 2;
    st_build(st, (no<<1), i, mid);
    st_build(st, (no<<1) + 1, mid + 1, j);
    // Update node
    st[no] = st[(no<<1)] + st[(no<<1) + 1];
    return;
}

void st_update(vector<int>& st, int no, int l, int r, int k, int value){
    // Update value of the leaf
    if (l == r){
        st[no] = value;
        return;
    }
    // Make recursion of the nodes
    int mid = (l + r) / 2;
    if (k <= mid){
        st_update(st, (no<<1), l, mid, k, value);
    }else{
        st_update(st, (no<<1) + 1, mid+1, r, k, value);
    }
    // Update node
    st[no] = st[(no<<1)] + st[(no<<1) + 1];
    return;
}

int st_search(vector<int>& st, int no, int l, int r, int i, int j){
    // If the interval is out of bounds, return INF
    if (i > r || j < l) 
        return 0;
    // If the interval is okay
    else if (l >= i && r <= j)
        return st[no];
    // Make recursive search
    int mid = (l + r) / 2;
    int left = st_search(st, (no<<1), l, mid, i, j);
    int right = st_search(st, (no<<1) + 1, mid+1, r, i, j);
    // Return the value of the node
    return (left + right);
}

int main(void){
    int n, q;
    cin >> n >> q;
    vector<int> tree(n);
    st_build(tree, 1, 0, n - 1);

    while(q--){
        int t, x;
        cin >> t, x;
        if (t == 1) st_update(tree, 1, 0, n-1, x, 1);
        if (t == 2) st_update(tree, 1, 0, n-1, x, 0);
        if (t == 3){
            int y;
            cin >> y;
            int count = st_search(tree, 1, 0, n-1, x, y);
            cout << count << '\n';
        }
    }
    return 0;
}