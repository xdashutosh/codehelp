#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,4,3,5,1};
    int n;
    cin>>n;
   int ans=0;
   for (int i = 0; i < n; i++)
   {
    ans=ans^arr[i];

   }
   for (int i = 1; i < n; i++)
   {
    ans=ans^i;
   }
   

   cout<<ans;
   
    
return 0;
}