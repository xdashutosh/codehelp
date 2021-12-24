#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
int arr[]={1,2,3,4,5,6};
for (int i = 0; i <n ; i+=2)
{
    if (i<n-1)
    {
    
    
    int temp;
    temp=arr[i];
     arr[i]=arr[i+1];
     arr[i+1]=temp;
    }
}
for (int i = 0; i < n; i++)
{
cout<<arr[i]<<"\t";
}

    
return 0;
}