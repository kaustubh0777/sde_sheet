#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>mat;
    vector<vector<int>>ans;
    
    int r,c,in;
    cin>>r>>c;

    vector<int>v;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>in;
            v.push_back(in);
        }
    }
    //[1,3] [8,10] [2,6] [9,9] [15,18]
    //after sorting =>[1,3][2,6] [8,10] [9,9] [15,18]
    sort(mat.begin(),mat.end());

   ans.push_back(mat[0]);
  int j=0;
    for(int i=1;i<r;i++)
    {
        if(ans[j][1]>=mat[i][0])
        {
            ans[j][1]=max(ans[j][1],mat[i][1]);
        }
        else{
            j++;
            ans.push_back(mat[i]);
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