#include <iostream>
 
using namespace std;
 
int liczba;
 
int suma(int n)
{
    if (n == 1) return 1;
    else return suma(n - 1) + n;
}
 
int main()
{
    for (int i = 0; i < 10; i++)
    {
        cin >> liczba;
        cout << suma(liczba) << endl;
    }
    return 0;
}