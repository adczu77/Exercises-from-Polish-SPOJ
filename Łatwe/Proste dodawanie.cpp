#include <iostream>
 
using namespace std;
 
int n, testy;
int liczba;
int suma;
 
int main()
{
    cin >> testy;
    for (int i = 0; i < testy; i++)
    {
        cin >> n;
        suma = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> liczba;
            suma += liczba;
        }
        cout << suma << endl;
    }
    return 0;
}