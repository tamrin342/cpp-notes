#include<bits/stdc++.h>
using namespace std;
int main()
{  string s = "TAMRIN";
    for(int i=0; i<s.size(); i++)
    {
        cout<< char(s[i] | ' ');
    }
}
