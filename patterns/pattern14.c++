#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=65;
    int n;
    cin>>n;
for (int i = 0; i < n; i++)
{
for (int j = 0; j <=i; j++)
{
cout<<char(a+n-i+j-1)<<" ";
}
cout<<endl;

}

return 0;
}