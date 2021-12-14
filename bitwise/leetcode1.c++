#include<bits/stdc++.h>
using namespace std;
int main()
{
    // diff in  product and sum of digits

    int n;
    cin>>n;
    int sum=0;
    int pro=1;
    while (n)
    {
        int r=n%10;
        sum+=r;
        pro*=r;
        n=n/10;
         
    }
    cout<<pro-sum<<"\n";

    
return 0;
}