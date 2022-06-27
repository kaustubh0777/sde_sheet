#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{

int r;
cin>>r;

vector<vector<int>>mat;
vector<int>v;

//for very ith row the first and the last column will be 0
/*
            1
          1  1
        1  2  1
      1 3  3  1
*/

for(int i=0;i<r;i++)
{
    mat[i].resize(i+1);
    mat[i][0]=1;//first column of ith row
    mat[i][i]=1;//last column of ith row

    for(int j=1;j<i;j++)
    {
        //sum of (element at previous row & column) + (element at previous row but same column)
        mat[i][j]=mat[i-1][j-1]+mat[i-1][j];
    }


}

for(int i=0; i<mat.size(); i++) 
		for(int j=0; j<mat[i].size(); j++) 
  			cout<<mat[i][j]<<" ";
        cout<<endl;
}