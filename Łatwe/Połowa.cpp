#include <iostream>
#include <string>
 
using namespace std;
 
int t;
string napis;
 
int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> napis;
        for (int j = 0; j < napis.length() / 2; j++)
        {
            cout << napis[j];
        }
        cout << endl;
    }
    return 0;
}