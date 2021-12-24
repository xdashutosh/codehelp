#include<bits/stdc++.h>
using namespace std;
int main()
{
    //comman element in both array
int arr1[]={1,2,2,2,3,4};
int arr2[]={2,2,3,3};
int i=0;
int j=0;
while (i<6&&j<4)
{
    if (arr1[i]==arr2[j])
    {
        cout<<arr2[j]<<" ";
        arr2[j]=-1;
        i++;
        
    }

    else if (arr1[i]<arr2[j])
    {
        i++;
    }

    else{
        j++;
    }


    


  
}


return 0;
}