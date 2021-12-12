#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=65;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<char(a+j+i);
            
        }
        
        cout<<endl;
    }
    
return 0;
}