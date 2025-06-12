#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

const int V = 6;
vector<int> adj[V] = {
    {1, 2},       // 0
    {0, 3, 4},    // 1
    {0, 4},       // 2
    {1, 5},       // 3
    {1, 2, 5},    // 4
    {3, 4}        // 5
};

void BFS_Tree(int start) {
    vector<bool> visited(V, false);
    queue<int> q;
    vector<int> parent(V, -1);
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                parent[v] = u;
                q.push(v);
            }
        }
    }

    cout << "BFS Tree (parent):\n";
    for (int i = 0; i < V; ++i) {
        if (i != start)
            cout << "Parent of " << i << " is " << parent[i] << endl;
    }
}

void DFS_Tree(int start) {
    vector<bool> visited(V, false);
    vector<int> parent(V, -1);
    stack<int> st;
    st.push(start);

    while (!st.empty()) {
        int u = st.top(); st.pop();
        if (!visited[u]) {
            visited[u] = true;
            for (int v : adj[u]) {
                if (!visited[v]) {
                    parent[v] = u;
                    st.push(v);
                }
            }
        }
    }

    cout << "\nDFS Tree (parent):\n";
    for (int i = 0; i < V; ++i) {
        if (i != start)
            cout << "Parent of " << i << " is " << parent[i] << endl;
    }
}

int main() {
    BFS_Tree(3);
    DFS_Tree(3);
    return 0;
}
