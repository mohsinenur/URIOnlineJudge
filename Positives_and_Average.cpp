#include<iostream>

using namespace std;

main()
{
    float a, b, c, d, e, f;
    int pNum = 0;
    double pAvg = 0;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;

    if (a > 0)
    {
        pNum = 1;
        pAvg = a;
    }
    if (b > 0)
    {
        pNum = pNum + 1;
        pAvg = pAvg + b;
    }
    if (c > 0)
    {
        pNum = pNum + 1;
        pAvg = pAvg + c;
    }
    if (d > 0)
    {
        pNum = pNum + 1;
        pAvg = pAvg + d;
    }
    if (e > 0)
    {
        pNum = pNum + 1;
        pAvg = pAvg + e;
    }
    if (f > 0)
    {
        pNum = pNum + 1;
        pAvg = pAvg + f;
    }

    cout << pNum << " valores positivos" << endl;
    cout << pAvg / pNum << endl;

    return 0;
}
