#include<bits/stdc++.h>
using namespace std ;


const int N = 1e3+10 ;
int graph1[N][N] ;
//
// 

vector<pair<int,int> > graph2[N] ; 

int main()
{
    int n , m ; // vertex and Edge 
    cin>>n>>m ; 
  
    for(int i=0;i<m;i++)
    {
        int v1 , v2 , wt ; 
        cin>>v1>>v2 >> wt; 
        graph1[v1][v2] = wt ; 
        graph1[v2][v1] = wt ; 

        graph2[v1].push_back({v2,wt}) ; 
        graph2[v2].push_back({v1,wt}) ; 
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
    for (int i = 1; i <= n; i++) {
        cout << i << ": ";
        for (int j = 0; j < graph2[i].size(); j++) {
            cout << "(" << graph2[i][j].first << ", " << graph2[i][j].second << ") ";
        }
        cout << endl;
    }
    return 0 ; 
}