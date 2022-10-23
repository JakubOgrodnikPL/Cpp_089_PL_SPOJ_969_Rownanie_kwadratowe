#include <iostream>
using namespace std;
int t;
double delta, a,b,c;
void obliczenie(double v1, double v2, double v3)
{
    delta = b*b-4*a*c;
    if(delta<0) cout<<0;
    if(delta==0) cout<<1;
    if(delta>0) cout<<2;
    cout<<endl;
}

int main()
{
    while (cin>>a>>b>>c)
    {
        obliczenie(a,b,c);
    }
    return 0;
}
