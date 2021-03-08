#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 10, set_bits = 0;

    while(x)
        {
            set_bits += x & 1;
            x = x>>1;  
        }
    cout<<"No. of set bits= "<<set_bits<<endl;

    // count set bits using builtin_popcount function
    cout<<"No. of set bits= "<<__builtin_popcount(15)<<endl;


    return 0;
}