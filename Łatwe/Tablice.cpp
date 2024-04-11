#include <iostream>
 
using namespace std;
 
int t, n;
int liczba;
 
int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int tab[n];
        for (int j = 0; j < n; j++)
        {
            cin >> liczba;
            tab[j] = liczba;
        }
        for (int k = n; k > 0; k--)
        {
            cout << tab[k - 1] << " ";
        }
    }
    return 0;
}