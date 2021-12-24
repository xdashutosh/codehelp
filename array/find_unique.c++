#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
int arr[]={1,2,3,1,5,3,2,5,9,7,9};
for (int i = 0; i < n; i++)
{
    for (int j=i+1; j<n ; j++)
    {
    if (arr[i]-arr[j]==0)
    {
        arr[i]=0;
        arr[j]=0;
    }
    
    }
    
}

for (int i = 0; i < n; i++)
{
if (arr[i]!=0)
{
    cout<<arr[i];
}

}



return 0;
}