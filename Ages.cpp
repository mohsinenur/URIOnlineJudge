#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    int x;
    double nCount = 0;
    double sNum = 0;

    top:
    cout << fixed;
    cin >> x;

    if (x<0)
    {

    }else
    {
        sNum += x;
        nCount++;
        goto top;
    }

    cout << setprecision(2) << sNum / nCount << endl;

    return 0;
}
