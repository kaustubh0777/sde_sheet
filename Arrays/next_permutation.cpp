#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

void nextpermutation(vector<int>&v,int n)
{
    int i,k;
    for(i=n-2;i>=0;i--)
    {
        if(v[i]<v[i+1])
        {
            break;
        }
    }
    if(i<0)
    {
        reverse(v.begin(),v.end());

    }
    else{
        for(k=n-1;k>i;k--)
        {
            if(v[k]>v[i])
            {
                break;
            }
        }
        swap(v[k],v[i]);
        reverse(v.begin()+i+1,v.end());

    }
}

int main()
{
int n,in;
cin>>n;
vector<int>v;

for(int i=0;i<n;i++)
{
cin>>in;
v.push_back(in);
}


nextpermutation(v,n);

for(int i=0;i<n;i++)
{
cout<<v[i]<<" ";
}
cout<<endl;
}