#include <iostream>
#define V 5

using namespace std;

void addEdges(int arr[][V], int u, int v, int weight) {
    arr[u][v] = weight;
}

void printGraph(int arr[][V]) {
    for(int i=0; i<V; ++i) {
        cout << endl << i << "=> ";
        for(int j=0; j<V; ++j) {
            cout << arr[i][j] << "-->";
        }
    }
}

int main() {
    int arr[V][V] = {0};

    addEdges(arr, 0, 1, 15);
    addEdges(arr, 0, 4, 12);
    addEdges(arr, 1, 2, 17);
    addEdges(arr, 1, 3, 9);
    addEdges(arr, 1, 4, 25);
    addEdges(arr, 3, 2, 18);
    addEdges(arr, 3, 4, 19);

    printGraph(arr);
    
    return EXIT_SUCCESS;
}