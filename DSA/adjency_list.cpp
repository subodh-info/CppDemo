#include <iostream>
#include <vector>
#define V 5

using namespace std;

void addEdges(vector<int> graph[], int u, int v) {
    graph[u].emplace_back(v);
}

void printGraph(vector<int> graph[]) {
    cout << endl << "Adjency list ===> ";
    for(int i=0; i<V; ++i) {
        cout << endl << i ;
        for(int j=0; j<graph[i].size(); ++j) {
            cout << "-->" << graph[i][j];
        }
    }
}

int main() {
    // declare array of vector
    vector<int> graph[V];

    // add edges
    addEdges(graph, 0, 1);
    addEdges(graph, 0, 4);
    addEdges(graph, 1, 2);
    addEdges(graph, 1, 3);
    addEdges(graph, 1, 4);
    addEdges(graph, 3, 2);
    addEdges(graph, 3, 4);

    // print graph
    printGraph(graph);

    return EXIT_SUCCESS;
}