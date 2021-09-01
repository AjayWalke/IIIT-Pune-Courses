/*
Represent any real world graph using 
adjacency list/adjacency matrix find minimum spanning
tree using Prim's or Kruskal's algorithm.
*/

#include <bits/stdc++.h>
using namespace std;

#define V 5

//-------------------Prism's Algorithm---------------------
int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
    {
        if (mstSet[v] == false && key[v] < min)
        {
            min = key[v], min_index = v;
        }
    }
    return min_index;
}

void print_MST(int parent[], int graph[V][V])
{
    cout << "\n*******Prism's Algorithm******\n\n";
    int weight = 0;
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
    {
        cout << parent[i] << " - " << i << " \t"
             << graph[i][parent[i]] << " \n";
        weight += graph[i][parent[i]];
    }
    cout << "\nWeight of MST : " << weight << "\n";
}

void prim_algo(int graph[V][V])
{
    int parent[V];
    int key[V];
    bool mstSet[V];
    for (int i = 0; i < V; i++)
    {
        key[i] = INT_MAX, mstSet[i] = false;
    }
    key[0] = 0;
    parent[0] = -1;
    for (int count = 0; count < V - 1; count++)
    {
        int u = minKey(key, mstSet);
        mstSet[u] = true;
        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
            {
                parent[v] = u, key[v] = graph[u][v];
            }
        }
    }
    print_MST(parent, graph);
}
//-------------------------------------------------------------

//----------------------Kruskal's Algorithm--------------------
int parent1[V];
int find(int i)
{

    while (parent1[i] != i)
    {
        i = parent1[i];
    }
    return i;
}

void union1(int i, int j)
{
    int a = find(i);
    int b = find(j);
    parent1[a] = b;
}

void kruskal_algo(int weight[][V])
{
    cout << "\n*******Kruskal's Algorithm******\n\n";
    int minweight = 0;
    for (int i = 0; i < V; i++)
    {
        parent1[i] = i;
    }
    int edge_count = 0;
    while (edge_count < V - 1)
    {
        int min = INT_MAX, a = -1, b = -1;
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (find(i) != find(j) && weight[i][j] < min)
                {
                    min = weight[i][j];
                    a = i;
                    b = j;
                }
            }
        }
        union1(a, b);
        printf("Edge %d:(%d, %d) weight : %d \n",
               edge_count++, a, b, min);
        minweight += min;
    }
    printf("\n Weight of MST : %d \n", minweight);
}
//-------------------------------------------------------------

int main()
{
    int graph[V][V] = {{INT_MAX, 3, INT_MAX, 6, INT_MAX},
                       {3, INT_MAX, 2, 7, 4},
                       {INT_MAX, 2, INT_MAX, INT_MAX, 8},
                       {6, 7, INT_MAX, INT_MAX, 9},
                       {INT_MAX, 4, 8, 9, INT_MAX}};
    prim_algo(graph);
    kruskal_algo(graph);
    return 0;
}
