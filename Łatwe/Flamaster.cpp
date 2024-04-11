#include <iostream>
#include <string>
 
using namespace std;
 
int D;
string napis;
int wystapienia;
 
int main()
{
    cin >> D;
    for (int i = 0; i < D; i++)
    {
        cin >> napis;
        wystapienia = 1;
        for (int j = 0; j < napis.length(); j++)
        {
            if (napis[j] == napis[j + 1])
            {
                wystapienia++;
            }
            else
            {
                if (wystapienia == 1)
                    cout << napis[j];
                else if (wystapienia == 2)
                    cout << napis[j] << napis[j - 1];
                else
                    cout << napis[j] << wystapienia;
                wystapienia = 1;
            }
        }
        cout << endl;
    }
    return 0;
}