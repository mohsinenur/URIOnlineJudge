#include<iostream>

using namespace std;

main()
{
    int X, Y, i;

    int oNum = 0;
    int oSum = 0;

    cin >> X;
    cin >> Y;

    if (X > Y)
    {
        for (i = (Y+1); i < X; i++)
        {
            if ((i % 2) != 0)
            {
                oNum = i;
                oSum += oNum;
            }
        }
        cout << oSum << endl;
    }else if (X < Y)
    {
        for (i = (X+1); i < Y; i++)
        {
            if ((i % 2) != 0)
            {
                oNum = i;
                oSum += oNum;
            }
        }
        cout << oSum << endl;
    }else
    {
        cout << 0 << endl;
    }

    return 0;
}
