#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,in;
    cin>>n;
    vector<vector<int>>mat;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>in;
            v.push_back(in);
        }
        mat.push_back(v);
        v.clear();
    }

    /*
    1 2 3      7 4 1
    4 5 6  =   8 5 2
    7 8 9      9 6 3

    transpose the matrix and then reverse every row
    */

   for(int i=0;i<n;i++)
   {
    for(int j=0;j<i;j++)
    {
        swap(mat[i][j],mat[j][i]);//transpose
    }
   }

   //Now reversing every row

   for(int i=0;i<n;i++)
   {
     reverse(mat[i].begin(),mat[i].end());
   }

   //Printing the matrix

   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
    cout<<mat[i][j]<<" ";
    }
    cout<<endl;
   }

}