#include <bits/stdc++.h>

using namespace std;
template <typename T1, typename T2, typename T3>

// defining class templete
class triplet
{
    T1 a;
    T2 b;
    T3 c;
    public:
    triplet(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void get_elments()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};

int main()
{
    triplet <float, float, float> t1(1.77, 2.55, 7.66);
    t1.get_elments();
    return 0;
}