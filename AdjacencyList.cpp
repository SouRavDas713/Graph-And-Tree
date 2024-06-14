#include<bits/stdc++.h>
using namespace std ;


const int N = 1e3+10 ;
int graph1[N][N] ;
// O(V+E) 
// 

vector<int> graph2[N] ; 

int main()
{
    int n , m ; // vertex and Edge 
    cin>>n>>m ; 
  
    for(int i=0;i<m;i++)
    {
        int v1 , v2 ; 
        cin>>v1>>v2 ; 
        graph1[v1][v2] = 1 ; 
        graph1[v2][v1] = 1 ; 

        graph2[v1].push_back(v2) ; 
        graph2[v2].push_back(v1) ; 
    }

    // Output the adjacency matrix
     cout << "Adjacency Matrix:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) 
        {
            cout << graph1[i][j] << " ";
        }
        cout << endl;
    }

     // Output the adjacency list
    cout << "Adjacency List:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (int v : graph2[i])
        {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0 ; 
}