#include <iostream>
 
using namespace std;
 
int t, v1, v2;
 
int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> v1 >> v2;
        cout << 2 * (v1 * v2)/(v1 + v2) << endl;
    }
    return 0;
}