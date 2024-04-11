#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    double r,d,r_2,S;
    double pi=3.141592654;
    cin>>r>>d;
    r_2=sqrt((r*r)-(d*d/4));
    S=pi*r_2*r_2;
    cout<<S;
    return 0;
}