#include <iostream>
#include <string>
 
using namespace std;
 
int liczba_testow;
int liczba;
int liczby_zlozone=0;
 
int main()
{
    cin >> liczba_testow;
    for (int i = 0; i < liczba_testow; i++)
    {
        liczby_zlozone = 0;
        cin >> liczba;
        if (liczba == 2 || liczba == 3)
            cout << "TAK" << endl;
        else if (liczba == 1)
            cout << "NIE" << endl;
        else
        {
            for (int j = 2; j <= liczba - 1; j++)
            {
                if (liczba % j == 0)
                {
                    liczby_zlozone++;
                }
            }
            if (liczby_zlozone != 0)
                cout << "NIE" << endl;
            else
                cout << "TAK" << endl;
        }
    }
    return 0;
}