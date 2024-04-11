#include <iostream>
#include <string>
 
using namespace std;
 
int t;
long int n;
string napis;
 
long int silnia(long int m)
{
    if (m == 0) return 1;
    else return silnia(m - 1)*m;
}
 
int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n > 9)
            cout << 0 << " " << 0 << endl;
        else
        {
            long int wynik_silnii = silnia(n) % 100;
            cout << wynik_silnii / 10 << " " <<  wynik_silnii % 10 << endl;
        }
    }
    return 0;
}