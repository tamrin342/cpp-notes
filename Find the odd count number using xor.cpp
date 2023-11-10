#include<iostream>
#include<vector>
using namespace std;
int main()
{  int n,val;
    cin>>n;
int ans = 0;
for(int i=0; i<n; i++)
{
    cin>>val;
    ans^=val;
}
cout<<ans;
}
