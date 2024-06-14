#include<bits/stdc++.h>
using namespace std ;
//V*V matrix
//Use -> i,j connected or not ??? what is weight ?? O(1)
const int N = 1e3+10 ;
int graph[N][N] ;
// O(n^2)
// if n=10^6 Then it impossible to store the matrix

int main()
{
    int n , m ; // vertex and Edge 
    cin>>n>>m ; 
  
    for(int i=0;i<m;i++)
    {
        int v1 , v2 ; 
        cin>>v1>>v2 ; 
        graph[v1][v2] = 1 ; 
        graph[v2][v1] = 1 ; 
    }

    // Output the adjacency matrix
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) 
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    return 0 ; 
}