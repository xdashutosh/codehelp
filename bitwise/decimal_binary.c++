#include<bits/stdc++.h>
using namespace std;
int main()
{int bit;
    int n;
    cin>>n;
while(n!=0){
bit=n&1;
n=n>>1;
cout<<bit;
}


return 0;
}