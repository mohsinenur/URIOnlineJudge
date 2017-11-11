#include<iostream>

using namespace std;

main()
{
    int a, b, c, d, e;
    int eNum = 0;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    if ((a % 2) == 0)
    {
        eNum = 1;
    }
    if ((b % 2) == 0)
    {
        eNum = eNum + 1;
    }
    if ((c % 2) == 0)
    {
        eNum = eNum + 1;
    }
    if ((d % 2) == 0)
    {
        eNum = eNum + 1;
    }
    if ((e % 2) == 0)
    {
        eNum = eNum + 1;
    }

    cout << eNum << " valores pares" << endl;

    return 0;
}
