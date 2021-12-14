#include<bits/stdc++.h>
using namespace std;
int main()
{
    // & | ~ ^ work in binary form
    // 2 & 3 =2 --2=10,3=11 = 10-2 ans
    int a=2&3;
    cout<<a<<"\n"; 
    cout<<~a<<"\n";
    a=7|4;
    cout<<a<<"\n"; 
    a=2^3;
    cout<<a<<"\n"; 

return 0;
}