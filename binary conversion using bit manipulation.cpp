#include<bits/stdc++.h>
using namespace std;
void printBinary(int num)
{
    for(int i=10; i>=0; i--)
    {
        cout<<((num>>i) & 1);
    }
    cout<<endl;
}

int main()
{
   for(int i=1; i<=100; i++)
       printBinary(i);
}
