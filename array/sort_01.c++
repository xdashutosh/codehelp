#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;

    int arr[]={1,1,0,0,0,0,1,0};
    for (int i = 0; i < 8; i++)
    {
        if (arr[i]==0)
        {
            count++;
        }
        else if (arr[i]==1)
        {
        
        }
        
        
    }
    for (int i = 0; i < 8; i++)
    {
        if (i<count)
        {
        arr[i]=0;
        }
        else{
            arr[i]=1;
        }
        
    }

for (int i = 0; i < 8; i++)
{
    cout<<arr[i]<<" ";
}


    
return 0;
}