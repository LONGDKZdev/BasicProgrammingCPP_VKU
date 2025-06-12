#include <iostream>
#include <vector>
using namespace std;

const int V = 5; 

void adjacencyMatrix() {
    int matrix[V][V] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 1, 1},
        {0, 1, 1, 0, 1},
        {0, 0, 1, 1, 0}
    };
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void adjacencyList() {
    vector<int> adj[V] = {
        {1, 2},       // A
        {0, 2, 3},    // B
        {0, 1, 3, 4}, // C
        {1, 2, 4},    // D
        {2, 3}        // E
    };

    cout << "\nAdjacency List:\n";
    for (int i = 0; i < V; ++i) {
        cout << char('A' + i) << ": ";
        for (int j : adj[i]) cout << char('A' + j) << " ";
        cout << endl;
    }
}

void weightedMatrix() {
    int weights[V][V] = {
        {0, 2, 4, 0, 0},
        {2, 0, 1, 7, 0},
        {4, 1, 0, 3, 5},
        {0, 7, 3, 0, 2},
        {0, 0, 5, 2, 0}
    };

    cout << "\nWeighted Matrix:\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j)
            cout << weights[i][j] << " ";
        cout << endl;
    }
}

int main() {
    adjacencyMatrix();
    adjacencyList();
    weightedMatrix();
    return 0;
}
