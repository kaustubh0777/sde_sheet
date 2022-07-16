#include<bits/stdc++.h>
using namespace std;

int main()
{
    int in,n,m;
    cin>>n>>m;
    vector<int>a;
    vector<int>b;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        a.push_back(in);

    }
    for(int j=0;j<m;j++)
    {
        cin>>in;
        b.push_back(in);

    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]>b[j])
            {
                swap(a[i],b[j]);
            }
            sort(b.begin(),b.end());
        }
        
    }
    for(int i=0;i<m;i++)
    {
        a.push_back(b[i]);
    }
    for(int i=0;i<n+m;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}