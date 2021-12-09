#include <iostream>
using namespace std;

///// CLASES AUXILIARES ///////
class Edge; // Declaración para usar en Vertex

class Vertex
{
    private:
        Vertex *next = nullptr;
        Edge *adj  = nullptr;
        string data;
        friend class Graph;
};
class Edge
{
    private:
        Edge *next  = nullptr;
        Vertex *adj  = nullptr;
        int weight = 0;
        friend class Graph;
};

///// CLASE GRAPH ///////

class Graph
{
    private:
        Vertex *init = nullptr;
        int size = 0;
    public:
        void crearGrafo()
        {
            cout << (init == nullptr ? "Se creo el grafo vacío" : "El grafo ya fue creado antes y no está vacío.") <<endl;
        };
        bool esVacio()
        {
            return (init == nullptr) ? true : false;
        };
        // ~Graph();
};

int main()
{
    Graph G;
    G.crearGrafo();
    cout << G.esVacio() <<endl;


    return 0;
}