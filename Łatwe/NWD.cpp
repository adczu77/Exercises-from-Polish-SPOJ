#include <iostream>
 
using namespace std;
 
int a, b;
int t;
 
int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        int p;
        while (b != 0)
        {
            p = b;
            b = a % b;
            a = p;
        }
        cout << a << endl;
    }
    return 0;
}