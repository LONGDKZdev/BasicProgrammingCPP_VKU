#include <iostream>
#include <queue>
#include <stack>
using namespace std;

const int MAX = 100;
int graph[MAX][MAX];
bool visited[MAX];
int n;

void inputGraph() {
    cout << "Nhap so luong dinh: ";
    cin >> n;

    cout << "Nhap ma tran ke (cac gia tri 0 hoac 1):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    cout << "\nMa tran ke vua nhap:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}


void BFS(int start) {
    if (start < 0 || start >= n) {
        cout << "Invalid BFS starting vertex!\n";
        return;
    }

    fill(visited, visited + n, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    cout << "BFS traversal from vertex " << start << ": ";
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v = 0; v < n; v++) {
            if (graph[u][v] && !visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}

void DFS(int start) {
    if (start < 0 || start >= n) {
        cout << "Invalid DFS starting vertex!\n";
        return;
    }

    fill(visited, visited + n, false);
    stack<int> st;
    st.push(start);

    cout << "DFS traversal from vertex " << start << ": ";
    while (!st.empty()) {
        int u = st.top(); st.pop();
        if (!visited[u]) {
            visited[u] = true;
            cout << u << " ";
            for (int v = n - 1; v >= 0; v--) {
                if (graph[u][v] && !visited[v]) {
                    st.push(v);
                }
            }
        }
    }
    cout << endl;
}

int main() {
    inputGraph();

    int start = 0;
    BFS(start);
    DFS(start);

    return 0;
}
