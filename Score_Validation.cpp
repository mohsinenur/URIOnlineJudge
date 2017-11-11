#include<iostream>

using namespace std;

main()
{
    float x;
    float tNum = 0.0;
    float sNum = 0.0;

    top:
    cin >> x;

    if ((x >= 0.0) && (x <= 10.0))
    {
        tNum += x;
        sNum += 1;

        if (sNum == 2)
        {
            cout << "media = " << tNum/2 << endl;
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
