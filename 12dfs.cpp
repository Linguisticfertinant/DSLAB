#include<iostream>
#include<vector>
using namespace std;

vector<int> graph[10];
bool visited[10];

void dfs(int node) {
    visited[node] = true;
    cout << node << " ";

    for(int i = 0; i < graph[node].size(); i++) {
        int next = graph[node][i];
        if(!visited[next]) {
            dfs(next);
        }
    }
}

int main() {
    int edges, u, v;
    cout << "Enter number of edges: ";
    cin >> edges;

    for(int i = 0; i < edges; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(0);   // starting from node 0
    return 0;
}
