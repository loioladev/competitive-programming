#include "../definitions.h"

int u;
// u is the maximum number of steps we will ever walk
vector<vi> successors (u, vi (n));

// gives the node that we will reach if we 
// begin at node x and walk k steps forward
succ(int x, int k){
    if (k == 1)
        successors(x);
    succ(succ(x, k/2), k/2);
}