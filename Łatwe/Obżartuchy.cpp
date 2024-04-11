#include <iostream>
#include <cmath>
 
using namespace std;
 
int obzartuchy, ciastka_w_pudelku, ile;
int pudelka;
float wynik;
 
 
int main()
{
    cin >> ile;
    for (int i = 1; i <= ile; i++)
    {
        pudelka = 0;
        cin >> obzartuchy >> ciastka_w_pudelku;
        int czasy[obzartuchy];
        for (int j = 0; j < obzartuchy; j++)
        {
            cin >> czasy[j];
        }
        for (int k = 0; k < obzartuchy; k++)
        {
            pudelka += (int)(86400 / czasy[k]);
        }
        wynik = (float)pudelka / (float)ciastka_w_pudelku;
        cout << (int)ceil(wynik) << endl;
    }
    return 0;
}