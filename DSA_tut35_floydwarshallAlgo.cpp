#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int n, m;
    cin >> n >> m;

    // Initialize the adjacency matrix
    vector<vector<int>> adj(n+1, vector<int>(n+1, INF));
    for (int i = 1; i <= n; i++) {
        adj[i][i] = 0;
    }

    // Read in the edges
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = w;
    }

    // Run Floyd Warshall algorithm
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
            }
        }
    }

    // Output the shortest paths
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (adj[i][j] == INF) {
                cout << "INF ";
            } else {
                cout << adj[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}


// #include <bits/stdc++.h>

// using namespace std;

// const int INF = 1e9;

// void floyd_warshall(vector<vector<int>> &dist) {
//   for (int k = 0; k < dist.size(); k++) {
//     for (int i = 0; i < dist.size(); i++) {
//       for (int j = 0; j < dist.size(); j++) {
//         dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//       }
//     }
//   }
// }

// int main() {
//   int n;
//   cin >> n;

//   vector<vector<int>> dist(n, vector<int>(n, INF));
//   for (int i = 0; i < n; i++) {
//     dist[i][i] = 0;
//   }

//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       int w;
//       cin >> w;
//       if (w != 0) {
//         dist[i][j] = w;
//       }
//     }
//   }

//   floyd_warshall(dist);

//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       cout << dist[i][j] << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }