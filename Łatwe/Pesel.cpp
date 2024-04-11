#include <iostream>
 
using namespace std;
 
long long pesel[11];
long long PESEL;
int procedura[] = {1,3,7,9,1,3,7,9,1,3,1};
int testy;
int suma=0;
 
int main()
{
    cin >> testy;
    for (int i = 0; i < testy; i++)
    {
        suma = 0;
        cin >> PESEL;
        for (int j = 10; j >= 0; j--)
        {
            pesel[j] = PESEL % 10;
            PESEL = PESEL / 10;
        }
        for (int k = 0; k < 11; k++)
        {
            suma += pesel[k] * procedura[k];
        }
        if (suma % 10 == 0)
            cout << "D" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}