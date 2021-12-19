#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
cin>>n;
int m= n;
int mask=0;
if (n==0)
{
cout<<1<<"\n";
}
else{

while (m!=0)//agar 1s bit n times place tak h to n times loop and mask creation 
{
    mask=(mask<<1)|1;
    m=m>>1;//its just a helper to make loop work 

}
int ans=(~n)&mask;
cout<<ans<<"\n";

}


return 0;
}