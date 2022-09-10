// this program simple example to implement directed graph

#include <iostream>
#define V 5

using namespace std;

void addEdges(int arr[][V], int u, int v) {
    arr[u][v] = 1;
}

void printGraph(int arr[][V]) {
    for(int i=0; i<V; ++i) {
        cout << endl << i << "==> ";
        for(int j=0; j<V; ++j) {
            cout << " "<< arr[i][j];
        }
    }
}

int main() {
    // declare and initialize 2d array with value '0'
    int arr[V][V] = {0}; 

    // add the eges
    addEdges(arr, 0, 1);
    addEdges(arr, 0, 4);
    addEdges(arr, 1, 2);
    addEdges(arr, 1, 3);
    addEdges(arr, 1, 4);
    addEdges(arr, 3, 2);
    addEdges(arr, 3, 4);

    // print graphs
    printGraph(arr);
    
    return EXIT_SUCCESS;
}