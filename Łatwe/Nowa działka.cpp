#include <iostream>
#include <math.h>
 
using namespace std;
 
int D, k;
 
int main()
{
    cin >> D;
    for (int i = 0; i < D; i++)
    {
        cin >> k;
        cout << pow(k, 2) << endl;
    }
    return 0;
}