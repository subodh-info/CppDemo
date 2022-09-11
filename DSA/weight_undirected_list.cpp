#include <iostream>
#include <vector>
#define V 5

using namespace std;

void addEdges(vector<pair<int, int>> graph[], int u, int v, int weight) {
    graph[u].emplace_back(make_pair(v, weight));
    graph[v].emplace_back(make_pair(u, weight));
}

void printGraph(vector<pair<int, int>> graph[]) {
    for(int i=0; i<V; ++i) {
        cout << endl << i ;
        if(graph[i].size() == 0) {
            cout << "--> X";
        }else {
            for(auto it = graph[i].begin(); it != graph[i].end(); ++it) {
                cout << "-->(" << it->first << "," << it->second << ")";
            }
            cout << endl;
        }
    }
}

int main() {
    vector<pair<int, int>> graph[V];

    addEdges(graph, 0, 1, 10);
    addEdges(graph, 0, 4, 20);
    addEdges(graph, 1, 2, 30);
    addEdges(graph, 1, 3, 40);
    addEdges(graph, 1, 4, 50);
    addEdges(graph, 2, 3, 60);
    addEdges(graph, 3, 4, 70);

    printGraph(graph);
    
    return EXIT_SUCCESS;
}