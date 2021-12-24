#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={1,4,2,3,5};
int s;
cin>>s;
for (int i = 0; i < 5; i++)
{
    for (int j = i+1; j < 5; j++)
    {
        if (arr[i]+arr[j]==s)
        {
            if (arr[i]<=arr[j])
            {
            cout<<"{"<<arr[i]<<","<<arr[j]<<"}"<<" ";
            
            }
            else{
            cout<<"{"<<arr[j]<<","<<arr[i]<<"}"<<" ";

            }
            
        }
        
    }
    
}


return 0;
}