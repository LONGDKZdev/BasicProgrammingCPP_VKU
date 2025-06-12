#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

const int V = 5;
vector<int> adj[V] = {
    {1, 2},       // A
    {0, 2, 3},    // B
    {0, 1, 3, 4}, // C
    {1, 2, 4},    // D
    {2, 3}        // E
};

void BFS(int start) {
    vector<bool> visited(V, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    cout << "BFS starting from " << char('A' + start) << ": ";
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << char('A' + u) << " ";
        for (int v : adj[u]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
            }
        }
    }
    cout << endl;
}

void DFS(int start) {
    vector<bool> visited(V, false);
    stack<int> st;
    st.push(start);

    cout << "DFS starting from " << char('A' + start) << ": ";
    while (!st.empty()) {
        int u = st.top(); st.pop();
        if (!visited[u]) {
            cout << char('A' + u) << " ";
            visited[u] = true;
        }
        for (int i = adj[u].size() - 1; i >= 0; --i) {
            int v = adj[u][i];
            if (!visited[v])
                st.push(v);
        }
    }
    cout << endl;
}

int main() {
    BFS(3); // Node D
    DFS(1); // Node B
    return 0;
}
