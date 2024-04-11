#include <iostream>
#include <string>
 
using namespace std;
 
int t, liczba;
bool sygnal;
int dodawanie;
 
int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        dodawanie = 0;
        sygnal = false;
        cin >> liczba;
        while (sygnal == false)
        {
            string liczba_napis = to_string(liczba);
            string odwrocona_liczba = to_string(liczba);
            int n = odwrocona_liczba.length();
            for (int j = 0; j < (n / 2); j++)
            {
                swap(odwrocona_liczba[j], odwrocona_liczba[n - j - 1]);
            }
            int liczba2 = stoi(odwrocona_liczba);
 
            int k,l;
            for (k = 0, l = liczba_napis.length()-1; k < l; k++, l--)
            {
                if (liczba_napis[k] != liczba_napis[l])
                    break;
            }
            if (k < l)
            {
                sygnal = false;
                dodawanie++;
                liczba = liczba2 + liczba;
            }
            else
                sygnal = true;
        }
        cout << liczba << " " << dodawanie << endl;
    }
    return 0;
}