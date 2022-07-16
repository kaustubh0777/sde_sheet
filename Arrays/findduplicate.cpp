#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

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

int slow=v[0];
int fast=v[0];

do
{
    slow=v[slow];
    fast=v[v[fast]];
    /* code */
} while (slow!=fast);

fast=v[0];
while(slow!=fast)
{
    slow=v[slow];
    fast=v[fast];
}

cout<<fast<<endl;

}