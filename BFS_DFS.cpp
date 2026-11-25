#include<bits/stdc++.h>
using namespace std;
// BFS Traversal
void bfs() {
    queue<int> Q;
    vector<bool> vis(V, false);

    Q.push(0);
    vis[0] = true;

    while (Q.size() > 0) {
        int u = Q.front(); // u - v
        Q.pop();

        cout << u << " ";

        for (int v : l[u]) { // v -> immediate neighbor
            if (!vis[v]) {
                vis[v] = true;
                Q.push(v);
            }
        }
    }

    cout << endl;
}
/*
BFS(Graph, start):
    create a queue Q
    create a visited array/set vis, initialized to false

    vis[start] ← true
    Q.enqueue(start)

    while Q is not empty:
        u ← Q.dequeue()
        print u

        for each neighbor v of u in Graph:
            if vis[v] is false:
                vis[v] ← true
                Q.enqueue(v)
*/


// Iterative DFS Traversal (using Stack)
void dfs() {
    int src = 0;
    stack<int> S;
    vector<bool> vis(V, false);

    S.push(src);

    while (S.size() > 0) {
        int u = S.top();
        S.pop();

        if (!vis[u]) {
            vis[u] = true;
            cout << u << " ";

            for (int v : l[u]) { // v -> immediate neighbor
                if (!vis[v]) {
                    S.push(v);
                }
            }
        }
    }

    cout << endl;
}

/*
DFS_Iterative(Graph, start):
    create a stack S
    create a visited array/set vis, initialized to false

    S.push(start)

    while S is not empty:
        u ← S.pop()

        if vis[u] is false:
            vis[u] ← true
            print u

            for each neighbor v of u in Graph:
                if vis[v] is false:
                    S.push(v)
*/