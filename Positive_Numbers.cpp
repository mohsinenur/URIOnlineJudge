#include<iostream>

using namespace std;

main()
{
    float a, b, c, d, e, f;
    int pNum = 0;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;

    if (a > 0)
    {
        pNum = 1;
    }
    if (b > 0)
    {
        pNum = pNum + 1;
    }
    if (c > 0)
    {
        pNum = pNum + 1;
    }
    if (d > 0)
    {
        pNum = pNum + 1;
    }
    if (e > 0)
    {
        pNum = pNum + 1;
    }
    if (f > 0)
    {
        pNum = pNum + 1;
    }

    cout << pNum << " valores positivos" << endl;

    return 0;
}
