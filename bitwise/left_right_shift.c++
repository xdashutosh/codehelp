#include<bits/stdc++.h>
using namespace std;
int main()
{//<< left shift --ex 3<<1 -so 3 is 000...0011 and left shiftd by 1 is 00..0110 i.e 6
int a=3<<1;
cout<<a<<"\n";

int b=5<<2;
cout<<b<<"\n";

//right shift is ex 3>>1 so 000..0011 now right shift is 000..0001 i.e 1
a=3>>1;
cout<<a<<"\n";
b=5>>2;
cout<<b<<"\n";



return 0;
}