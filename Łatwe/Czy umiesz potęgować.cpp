#include <iostream>
 
using namespace std;
 
int D, a, b;
int moduloB;
 
int main()
{
    cin >> D;
    for (int i = 0; i < D; i++)
    {
        cin >> a >> b;
        switch (a % 10)
        {
            case 1:
            {
                cout << 1 << endl;
                break;
            }
            case 2:
            {
                moduloB = b % 4;
                if (moduloB == 1)
                {
                    cout << 2 << endl;
                    break;
                }
                else if (moduloB == 2)
                {
                    cout << 4 << endl;
                    break;
                }
                else if (moduloB == 3)
                {
                    cout << 8 << endl;
                    break;
                }
                else if (moduloB == 0);
                {
                    cout << 6 << endl;
                    break;
                }
            }
            case 3:
            {
                moduloB = b % 4;
                if (moduloB == 1)
                {
                    cout << 3 << endl;
                    break;
                }
                else if (moduloB == 2)
                {
                    cout << 9 << endl;
                    break;
                }
                else if (moduloB == 3)
                {
                    cout << 7 << endl;
                    break;
                }
                else if (moduloB == 0);
                {
                    cout << 1 << endl;
                    break;
                }
            }
            case 4:
            {
                moduloB = b % 2;
                if (moduloB == 1)
                {
                    cout << 4 << endl;
                    break;
                }
                else if (moduloB == 0)
                {
                    cout << 6 << endl;
                    break;
                }
            }
            case 5:
            {
                cout << 5 << endl;
                break;
            }
            case 6:
            {
                cout << 6 << endl;
                break;
            }
            case 7:
            {
                moduloB = b % 4;
                if (moduloB == 1)
                {
                    cout << 7 << endl;
                    break;
                }
                else if (moduloB == 2)
                {
                    cout << 9 << endl;
                    break;
                }
                else if (moduloB == 3)
                {
                    cout << 3 << endl;
                    break;
                }
                else if (moduloB == 0);
                {
                    cout << 1 << endl;
                    break;
                }
            }
            case 8:
            {
                moduloB = b % 4;
                if (moduloB == 1)
                {
                    cout << 8 << endl;
                    break;
                }
                else if (moduloB == 2)
                {
                    cout << 4 << endl;
                    break;
                }
                else if (moduloB == 3)
                {
                    cout << 2 << endl;
                    break;
                }
                else if (moduloB == 0);
                {
                    cout << 6 << endl;
                    break;
                }
            }
            case 9:
            {
                moduloB = b % 2;
                if (moduloB == 1)
                {
                    cout << 9 << endl;
                    break;
                }
                else if (moduloB == 0)
                {
                    cout << 1 << endl;
                    break;
                }
            }
            case 0:
            {
                cout << 0 << endl;
                break;
            }
            default:
            {
                break;
            }
        }
    }
    return 0;
}