#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,5,4,2,2,1};
    int s;
    cin>>s;
    for (int i = 0; i < 8; i++)
    {
    for (int j = i+1; j < 8; j++)
    {
        for (int k = i+2; k < 8; k++)
        {
            if (arr[i]+arr[j]+arr[k]==s)
            {
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<"   ";
            }
            
        }
        
    }
    
    }
    
return 0;
}