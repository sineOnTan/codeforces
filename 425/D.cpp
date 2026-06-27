#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int logN = 100;
vector<int> edges[N];
vector<int> children[N];
int depth[N];
int log2s[N];
int parent[N][N];
int sizeT[N];
int n;

void add(int u, int v) {
  edges[u].push_back(v);
  // Warning: If the graph has self-loops, you need to check this.
  if (v != u) {
    edges[v].push_back(u);
  }
}

void constructTree(int c, int cPar = -1) {
    parent[c][0] = cPar;
    sizeT[c] = 1;
    for (int nxt : edges[c]) {
        if (nxt == parent[c][0]) continue;
        constructTree(nxt, c);
        children[c].push_back(nxt);
        sizeT[c] += sizeT[nxt];
    }
}

void preprocess() {
  for (int i = 1; i <= n; i++) {
    // assume parent[i][0] (the parent of i) is already filled in
    for (int j = 1; (1<<j) < n; j++) {
      parent[i][j] = -1;
    }
  }

  // fill in the parent for each power of two up to n
  for (int j = 1; (1<<j) < n; j++) {
    for (int i = 1; i <= n; i++) {
      if (parent[i][j-1] != -1) {
        // the 2^j-th parent is the 2^(j-1)-th parent of the 2^(j-1)-th parent
        parent[i][j] = parent[parent[i][j-1]][j-1];
      }
    }
  }
}

int lca (int u, int v) {
  // make sure u is deeper than v
  if (depth[u] < depth[v]) swap(u,v);
  
  // log2s[i] holds the largest k such that 2^k <= i
  // precompute by DP: log2s[i] = log2s[i/2] + 1
  for (int i = log2s[depth[u]]; i >= 0; i--) {
    // repeatedly raise u by the largest possible power of two until it is the same depth as v
    if (depth[u] - (1<<i) >= depth[v]) u = parent[u][i]; 
  }

  if (u == v) return u;

  for (int i = log2s[depth[u]]; i >= 0; i--)
    if (parent[u][i] != -1 && parent[u][i] != parent[v][i]) {
      // raise u and v as much as possible without having them coincide
      // this is important because we're looking for the lowest common ancestor, not just any
      u = parent[u][i];
      v = parent[v][i];
    }

  // u and v are now distinct but have the same parent, and that parent is the LCA
  return parent[u][0];
}

int main () {
    log2s[1] = 0;
    log2s[0] = 0;
    for (int i = 2; i <  N; i++)
        log2s[i] = log2s[i/2] + 1;


    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        add(i, p);
    }

    constructTree(1);
    preprocess();
}