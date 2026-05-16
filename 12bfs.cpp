#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> graph[10];
bool visited[10];

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for(int i = 0; i < graph[node].size(); i++) {
            int next = graph[node][i];
            if(!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
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

    bfs(0);   // starting from node 0
    return 0;
}
