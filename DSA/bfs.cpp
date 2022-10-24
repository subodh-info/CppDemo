#include <iostream>
#include <list>

using namespace std;

class Graph{
    int no_of_vertices;
    list<int> *adjList;
    bool *visited;

    public:
    Graph(int no_of_vertices);
    void addEdges(int src, int dest);
    void BFS(int startVertices);
    void displayVertices();
};

Graph :: Graph(int no_of_vertices) {
    this->no_of_vertices = no_of_vertices;
    adjList = new list<int>[no_of_vertices];
}

void Graph :: addEdges(int src, int dest) {
    adjList[src].push_back(dest);
    adjList[dest].push_back(src);
}

void Graph :: BFS(int startVertices) {
    visited = new bool[no_of_vertices];

    for(int i = 0; i < no_of_vertices; ++i) {
        visited[i] = false;
    }

    list<int> q;

    visited[startVertices] = true;
    q.push_back(startVertices);

    list<int> :: iterator itr;
    cout << endl;

    while(!q.empty()) {
        int currVertex = q.front();
        cout << currVertex << "  ";

        q.pop_front();

        for(itr = adjList[currVertex].begin(); itr != adjList[currVertex].end(); ++itr) {
            int adjVertex = *itr;
            if(!visited[adjVertex]) {
                visited[adjVertex] = true;
                q.push_back(adjVertex);
            }
        }
    }
}

void Graph :: displayVertices() {
    for(int i = 0; i < no_of_vertices; ++i) {
        cout << endl << i ;
        for(auto vertex : adjList[i]) {
            cout << "---> " << vertex;
        }
    }
}

int main() {

    system("cls");
    Graph g(5);

    g.addEdges(0, 1);
    g.addEdges(0, 2);
    g.addEdges(0, 3);
    g.addEdges(1, 2);
    g.addEdges(2, 4);
   
    g.BFS(2); 
    //g.displayVertices(); 

    return 0;
}