#include<bits/stdc++.h>
using namespace std;
int main()
{ int i=1;
 int n;
cin>>n;

if (n==1)
{
    cout<<"true";
}

else{

    while(i)
    {
i*=2;
if (i==n&&n>0)
{
    cout<<"true";
    break;
}


    }
}
if (i!=n||n<=0)
{
    cout<<"false"<<"\n";
}


    
return 0;
}