#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input the matrix;

    vector<vector<int>> mat;
    vector<int>v;
    int in;

    int r, c; // enter the number of row & column of the matrix
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> in;
            v.push_back(in);
        }
        mat.push_back(v);
        v.clear();
    }

    //using dummy arrays

    vector<int>dummy1(c,0);
    vector<int>dummy2(r,0);

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(mat[i][j]==0)
            {
                dummy1[j]=-1;
                dummy2[i]=-1;
            }
        }
    }

    //Now traverse and check if the column or row in the dummy arrays are -1,if they are we will set them 
    //equal to 0

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(dummy1[j]==-1 || dummy2[i]==-1)
            {
                //change the element in-place to zero
                mat[i][j]=0;
            }
        }
    }


    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

    



    
    
    /*

    Brute Force Approach

    // Traverse row major and column major

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] == 0)
            {
                for (int row = 0; row < mat.size(); row++)
                {
                    mat[row][j] = -1;
                }
                for (int col = 0; col < mat[0].size(); col++)
                {
                    mat[i][col] = -1;
                }
            }
        }
    }
    // for Every -1 in the matrix put it equal to zero

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] == -1)
            {
                mat[i][j] = 0;
            }
        }
    }

    // Printing

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] <<" ";
        }
        cout<<endl;
    }
    
}
    
    */

    