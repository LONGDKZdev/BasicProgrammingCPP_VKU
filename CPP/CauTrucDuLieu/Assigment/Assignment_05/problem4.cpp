#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n);
    vector<int> indegree(n, 0);
    int u, v;
    while (cin >> u >> v)
    {
        adj[u].push_back(v);
        indegree[v]++;
    }

    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for (int neighbor : adj[curr])
        {
            indegree[neighbor]--;
            if (indegree[neighbor] == 0)
                q.push(neighbor);
        }
    }
    cout << endl;
    return 0;
}
