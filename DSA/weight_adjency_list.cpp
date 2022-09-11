#include <iostream>
#include <vector>
#define V 5

using namespace std;

void addEdges(vector<pair<int, int>> graph[], int u, int v, int weight){
    graph[u].emplace_back(make_pair(v, weight));
}

void printGraph(vector<pair<int, int>> graph[]) {
    for(int i=0; i<V; ++i) {
        cout << endl << i;
        if(graph[i].size() == 0)
            cout << "--> X";
        else 
            for(auto it = graph[i].begin(); it!=graph[i].end(); ++it) {
                cout << "-->(" << it->first << "," << it->second << ")"; 
            }

       
    }
}

int main() {
    
    vector<pair<int, int>> graph[V];

    addEdges(graph, 0, 1, 15);
    addEdges(graph, 0, 4, 12);
    addEdges(graph, 1, 2, 17);
    addEdges(graph, 1, 3, 9);
    addEdges(graph, 1, 4, 25);
    addEdges(graph, 3, 2, 18);
    addEdges(graph, 3, 4, 19);

    printGraph(graph);

    return EXIT_SUCCESS;
}