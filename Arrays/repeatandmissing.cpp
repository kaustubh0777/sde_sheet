#include<bits/stdc++.h>
using namespace std;

int main()
{
    int in,n;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }

    int sum=(n*(n+1))/2;
    int sumsq=(n*(n+1)*(2*n+1))/6;

    for(int i=0;i<n;i++)
    {
        sum=sum-v[i];
        sumsq=sumsq-(v[i]*v[i]);


    }
    int missingno,repeatingno;

    missingno=(sum+sumsq/sum)/2;
    repeatingno=missingno-sum;

    cout<<"Missing Number is "<<missingno<<endl;
    cout<<"Repeating Number is "<<repeatingno<<endl;


}