#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    int X;
    float a;
    float sNum = 0;
    int nCount = 0;

    cout << fixed;

    top:
    cin >> a;

    if ((a >= 0.0) && (a <= 10.0))
    {
        sNum += a;
        nCount++;
        if (nCount == 2)
        {
            cout << setprecision(2) << "media = " << sNum / 2 << endl;
            cout << "novo calculo (1-sim 2-nao)" << endl;
            nCount = 0;
            sNum = 0;

            sTop:
            cin >> X;
            if (X == 2)
            {

            }else if (X==1)
            {
                goto top;
            }else
            {
                cout << "novo calculo (1-sim 2-nao)" << endl;
                goto sTop;
            }
        }else
        {
            goto top;
        }
    }else
    {
        cout << "nota invalida" << endl;
        goto top;
    }

    return 0;

}
