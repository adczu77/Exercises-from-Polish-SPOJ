#include <iostream>
 
using namespace std;
 
int a, b;
int t, pierwotne_a, pierwotne_b;
 
int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        int p;
        pierwotne_a = a;
        pierwotne_b = b;
        while (b != 0)
        {
            p = b;
            b = a % b;
            a = p;
        }
        cout << (pierwotne_a * pierwotne_b) / a << endl;
    }
    return 0;
}