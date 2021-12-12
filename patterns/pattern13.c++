#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=65;
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<char(a+i+j)<<" ";
        }
        cout<<endl;
        
    }
    
return 0;
}