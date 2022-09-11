#include <iostream>
#define V 5

using namespace std;

void addEdge(int graph[][V], int u, int v, int weight) {
    graph[u][v] = weight;
    graph[v][u] = weight;
}

void printGraph(int graph[][V]) {
    for(int i=0; i<V; ++i) {
        cout << endl << i << "--> ";
        for(int j=0; j<V; ++j) {
            cout << "\t" << graph[i][j];
        }
    }
}

int main() {
    int graph[V][V] = {0};

    addEdge(graph, 0, 1, 10);
    addEdge(graph, 0, 4, 20);
    addEdge(graph, 1, 2, 30);
    addEdge(graph, 1, 3, 40);
    addEdge(graph, 1, 4, 50);
    addEdge(graph, 2, 3, 60);
    addEdge(graph, 3, 4, 70);

    printGraph(graph);

    return EXIT_SUCCESS;
}